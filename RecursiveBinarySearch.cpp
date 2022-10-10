#include "RecursiveBinarySearch.h"

using namespace std;

bool RecursiveBinarySearch::search(std::vector<int> list, int goal) {


return Helper(list, goal, 0, list.size());

}

bool RecursiveBinarySearch::Helper(std::vector<int> list, int goal, int start, int end) {

//Base Case
if(start>=end){
    return false;
}


//Recursion
int middle = (start + end)/2;

if(list.at(middle) == goal) {
        return true;
}

if(list.at(middle) > goal) {

    return Helper(list, goal, start, middle-1);
} else {

    return Helper(list, goal, middle+1, end);
}

}
