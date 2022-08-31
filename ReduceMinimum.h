#ifndef _ReduceMinimum
#define _ReduceMinimum

#include "ReduceGeneric.h"

class ReduceMinimum : public ReduceGeneric {
    private:
        virtual int binaryOperator(int, int);
    
    public:
        ReduceMinimum();

};


#endif