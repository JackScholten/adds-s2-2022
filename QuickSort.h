#ifndef _QuickSort
#define _QuickSort

#include "Sort.h"
#include <vector>

class QuickSort : public Sort {
        public:
            QuickSort() {};

            virtual std::vector<int> sort(std::vector<int> list);


};

#endif