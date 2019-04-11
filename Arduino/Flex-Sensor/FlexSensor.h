

class FlexSensors{
private:
	int pin1;
	int pin2;
	int pin3;
	int pin4;
	int pin5;
	double sensors[5];
public:
	FlexSensors(int, int, int, int, int);

	double* getSensorsValue();
	void flexSensorsUpdate();


};

FlexSensors::FlexSensors(pin1, pin2, pin3, pin4, pin5){
	this->pin1 = pin1;
	this->pin2 = pin2;
	this->pin3 = pin3;
	this->pin4 = pin4;
	this->pin5 = pin5;

	pinMode(this->pin1, INPUT);
	pinMode(this->pin2, INPUT);
	pinMode(this->pin3, INPUT);
	pinMode(this->pin4, INPUT);
	pinMode(this->pin5, INPUT);
};

FlexSensors::getSensorsValue(){

    // # Kóðar fyrir putta
    // handCodes = [1,2,4,8]
		//
    // # Values af puttunum
    // handState = [225, 201, 104, 230]
		//
    // # Skilgreina hvenær putti er "niðri"
    // limit = 128
		//
    // # Summa
    // sm = 0
		//
    // for i in range(4):
    //     if handState[i] > limit:
    //         sm += handCodes[i]
    // print(sm)

	handCodes[4] = {1,2,4,8};

	handState[4] = {digitalRead(pin1), digitalRead(pin2), digitalRead(pin3), digitalRead(pin4)};

	int limit = 128;
	int sm = 0;
	for (int i = 0; i < 4; i++) {
		if (handState[i] > limit) {
			sm += handCodes[i];
		}
	}
	return sm;
}
