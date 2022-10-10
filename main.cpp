#include <iostream>
#include <vector>

#include "BubbleSort.h"
#include "Sort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"

using namespace std;

void print(vector<int> list) {

    for(int i = 0; i < list.size(); i++){

        cout << list.at(i) << " ";
    }

    cout << endl;
};

int main() {

    vector<int> list{1, 3, 5, 4, -5 , 100 , 7777 , 2014};

    QuickSort Jack;
    RecursiveBinarySearch Julian;

    list = Jack.sort(list);

    cout << boolalpha << Julian.search(list, 1) << " ";
    print(list);

    return 0;
}