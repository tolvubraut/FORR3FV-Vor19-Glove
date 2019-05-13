#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>

RF24 radio(7, 8);
const byte address[6] = "00001";

typedef struct
{
  int handState = -1;
  float gyroX = -1;
  float gyroY = -1;
} Values;

Values data;

// --- Game function ---//

int row, column;

int allPins[3][10]; /* = {
    {},
    {},
    {}
};
*/

int active[30];

void nextIndex()
{
  if (column < 10)
  {
    column++;
  }
};

void prevIndex()
{
  if (column > 0)
  {
    column--;
  }
};

void nextRow()
{
  if (row < 2)
  {
    row++;
  }
};

void prevRow()
{
  if (row > 0)
  {
    row--;
  }
};

void makeActive()
{
  addActive(allPins[row][column]);
};

void addActive(int pin)
{
  for (int i = 0; i < 30; i++)
  {
    if (active[i] = pin)
    {
      active[i] = 0;
      break;
    }
    else if (active[i] != 0)
    {
      active[i] = pin;
      break;
    }
  };
};

void setup()
{
  Serial.begin(9600);
  radio.begin();
  radio.openReadingPipe(0, address);

  for (int i = 0; i < 30; i++)
  {
    active[i] = -1;
  };

  // Power amplitude level: minimum
  radio.setPALevel(RF24_PA_MIN);
  radio.startListening();
}

void loop()
{
  // Ef að data er tilbúið (móttekið)
  if (radio.available())
  {
    // Búa til tómann streng
    //char text[32] = "";
    // Bæta við received data yfir í tóma strenginn
    radio.read(&data, sizeof(data));
    Serial.println(data.handState);
    Serial.println(data.gyroY);
    Serial.println(data.gyroX);
  }

  if (data.handState == 0)
  {
    Serial.println("Active");
  };

  if (data.gyroX < 60)
  {
    Serial.println("upp");
  };

  if (data.gyroX < -60)
  {
    Serial.println("upp");
  };

  if (data.gyroY < 60)
  {
    Serial.println("haegri");
  };

  if (data.gyroY < -60)
  {
    Serial.println("vinstir");
  };

  for (int i = 0; i < 2; i++)
  {
    for (int ii = 0; ii < 10; ii++)
    {
      digitalWrite(allPins[i][ii], LOW);
    };
  };

  digitalWrite(allPins[row][column], HIGH);

  for (int i = 0; i < 30; i++)
  {
    if (active[i] != 0)
    {
      digitalWrite(active[i], HIGH);
    }
  }
}