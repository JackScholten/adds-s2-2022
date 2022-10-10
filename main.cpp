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

    vector<int> list{2, 4, 2, 5, 8 , 6 , 3 , 4 , 6 , -1};

    QuickSort Jack;
    //RecursiveBinarySearch Julian;

    print(Jack.sort(list));

    //cout << Julian.search(Jack.sort(list), 100) << endl;

    return 0;
}