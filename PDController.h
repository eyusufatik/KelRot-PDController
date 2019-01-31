#ifndef PDCONTROLLER_H
#define PDCONTROLLER_H

class PDController{
    private:
        
        float kP;
        float kD;

        float error;
        float lastError;

    public:
        PDController(float kP, float kD);
        void setError(float error);
        float getOutput();
        
};
#endif