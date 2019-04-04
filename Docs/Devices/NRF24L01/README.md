### YouTube
* (How To Build an Arduino Wireless Network with Multiple NRF24L01 Modules)[https://youtu.be/xb7psLhKTMA]

### Greinar
* (The TRUTH About the Nrf24L01 Transceiver)[https://www.instructables.com/id/The-TRUTH-About-the-Nrf24L01-Transceiver/]

### Leiðbeiningar _Setup_
  ```C++
  // Sækja library Sækja library https://www.arduinolibraries.info/libraries/rf24
  // Innihalda nauðsinleg libraries
  #include <SPI.h>
  #include <nRF24L01.h>
  #include <RF24.h>

  // Búa til RF24 object
  // Arguments eru númerin á CNS & CE pinnunum
  RF24 radio(7, 8);

  // Búa til address (línu) til að eiga samskipti á
  const byte address[6] = "00001";
  ```

### Leiðbeiningar Module A
  ```C++
  void setup() {
    radio.begin();
    radio.openWritingPipe(address);
    // Power amplitude level: minimum
    radio.setPALevel(RF24_PA_MIN);
    radio.stopListening();
  }

  void loop() {
    // Búa til data til þess að senda
    const char text[] = "Hello World";
    // Senda data
    radio.write(&text, sizeof(text));
    // Bíða 1 sec þangað til sent er aftur
    delay(1000);
  }
  ```

### Leiðbeiningar Module B
  ```C++
  void setup() {
    Serial.begin(9600);
    radio.begin();
    radio.openReadingPipe(0, address);

    // Power amplitude level: minimum
    radio.setPALevel(RF24_PA_MIN);
    radio.startListening()
  }

  void loop() {
    // Ef að data er tilbúið (móttekið)
    if(radio.available()) {
      // Búa til tómann streng
      char text[32] = "";
      // Bæta við received data yfir í tóma strenginn
      radio.read(&text, sizeof(text));
      Serial.println(text);
    }
  }
  ```
