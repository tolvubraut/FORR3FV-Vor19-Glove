
#include<Wire.h>
const int MPU_addr=0x68;
double AcX,AcY,AcZ,Tmp,GyX,GyY,GyZ;




class Gyro{
    private: 
        int pin1;
        int pin2;
    
    public:
        Gyro(int pin1, int pin2){
            this->pin1 = pin1;
            this->pin2 = pin2;
            
            
            Wire.begin();
            Wire.beginTransmission(MPU_addr);
            Wire.write(0x6B);  // PWR_MGMT_1 register
            Wire.write(0);     // set to zero (wakes up the MPU-6050)
            Wire.endTransmission(true);
        }
        
        
        
        int getX(){
            
        }
}


