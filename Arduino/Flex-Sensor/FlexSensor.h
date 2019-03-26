

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
	sensors[5] = { digitalRead(pin1), digitalRead(pin2), digitalRead(pin3), digitalRead(pin4), digitalRead(pin5)};
	return sensors;
}

