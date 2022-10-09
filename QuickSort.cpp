#include "QuickSort.h"

#include <vector>

using namespace std;

vector<int> QuickSort::sort(vector<int> list) {

//Base Case
if(list.size() <= 1) {
    return list;
}

//Recursion
vector<int> less , more;
int pivot;

if(list.size() >= 3) {
    pivot = list.at(2);
    list.erase(list.begin()+1);
} else {

    pivot = list.at(0);
    list.erase(list.begin());
}

for(int i = 0; i < list.size(); i++) {

    if(i <= pivot) {
        less.push_back(list.at(i));
    } 

    more.push_back(list.at(i));
}

//AAGAHGAHAGHAGHAGAHGAGHAHGAHGA
return ;
}


