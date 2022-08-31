#ifndef _MapGeneric
#define _MapGeneric

#include <vector>

class MapGeneric {
    private:
        virtual int f(int) = 0;
        std::vector<int> result;

    public:
        std::vector<int> map(std::vector<int>);

};

#endif