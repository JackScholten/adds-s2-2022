#ifndef _FilterGeneric
#define _FilterGeneric

#include <vector>

class FilterGeneric {
    private:
        virtual bool g(int) = 0;
        std::vector<int> result;

    public:
        std::vector<int> filter(std::vector<int>);

};

#endif