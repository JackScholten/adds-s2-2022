#ifndef _RecursiveBinarySearch
#define _RecursiveBinarySearch

#include <vector>

class RecursiveBinarySearch {
    public:
        RecursiveBinarySearch() {};

        bool search(std::vector<int> list, int goal);
        bool Helper(std::vector<int> list, int goal, int start, int end);
};

#endif