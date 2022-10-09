#ifndef _QuickSort
#define _QuickSort

#include "Sort.h"
#include <vector>

class QuickSort : public Sort {
        private:
        std::vector<int> NList;
        
        public:
            QuickSort() {};

            virtual std::vector<int> sort(std::vector<int> list);


};

#endif