#ifndef _ReduceGeneric
#define _ReduceGeneric

#include <vector>

class ReduceGeneric {
    private:
        virtual int binaryOperator(int, int) = 0;

    public:
        int reduce(std::vector<int>);

};

#endif