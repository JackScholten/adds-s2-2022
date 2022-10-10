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

    int input;
    vector<int> list;
    
    while(cin >> input) {
        list.push_back(input);
    }

    QuickSort Jack;
    RecursiveBinarySearch Julian;

    list = Jack.sort(list);

    cout << boolalpha << Julian.search(list, 1) << " ";
    print(list);

    return 0;
}