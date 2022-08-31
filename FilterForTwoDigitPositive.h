#ifndef _FilterForTwoDigitPositive
#define _FilterForTwoDigitPositive

#include "FilterGeneric.h"

class FilterForTwoDigitPositive : public FilterGeneric {
    private:
        virtual bool g(int);
    
    public:
        FilterForTwoDigitPositive();

};


#endif