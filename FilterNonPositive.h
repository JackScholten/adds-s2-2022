#ifndef _FilterNonPositive
#define _FilterNonPositive

#include "FilterGeneric.h"

class FilterNonPositive : public FilterGeneric {
    private:
        virtual bool g(int);
    
    public:
        FilterNonPositive();

};


#endif