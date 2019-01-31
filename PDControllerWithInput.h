#include "iostream"
#include "stdio.h"

template<typename T>
class PDControllerWithInput{
    private:
        float kP;
        float kD;

        float reference;
        float current;

        float error;
        float lastError;

        T (*funcPtr)();
    public:
        PDControllerWithInput(float kP, float kD, T (*funcPtr)()){
            this->kP = kP;
            this->kD = kD;
            this->funcPtr = funcPtr;
        }
        void setReference(float ref);
        void setCurrent(float current);
        T get(){
            return (*this->funcPtr)();
        }
};