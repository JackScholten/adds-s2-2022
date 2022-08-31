#ifndef _ReduceGCD
#define _ReduceGCD

#include "ReduceGeneric.h"

class ReduceGCD : public ReduceGeneric {
    private:
        virtual int binaryOperator(int, int);
    
    public:
        ReduceGCD();

};


#endif