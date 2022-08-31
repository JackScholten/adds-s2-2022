#ifndef _FilterOdd
#define _FilterOdd

#include "FilterGeneric.h"

class FilterOdd : public FilterGeneric {
    private:
        virtual bool g(int);
    
    public:
        FilterOdd();

};


#endif