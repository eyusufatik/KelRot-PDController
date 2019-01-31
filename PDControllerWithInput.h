#include "iostream"
#include "stdio.h"

template<typename T>
class PDControllerWithInput{
    private:
        float kP;
        float kD;

        float refPoint;
        float current;

        float error;
        float lastError;

        T (*funcPtr)();
    public:
        PDControllerWithInput(float kP, float kD, T (*funcPtr)()){
            this->kP = kP;
            this->kD = kD;
            this->funcPtr = funcPtr;
            this->lastError = 0;
        }

        void setReferencePoint(float refPoint){
            this->setReferencePoint;
        }

        float getOutput(){
            this->current = (*this->funcPtr)();
            error = refPoint - current;
            float output = this->kP * error + this->kD * (this->error - this->lastError);
            this->lastError = error;
            return output;
        }
};