#include "BubbleSort.h"

#include <vector>

using namespace std;

vector<int> BubbleSort::sort(vector<int> list) {
    bool swapped;

    for (int i = 0; i < list.size() - 1; i++) {
        swapped = false;

        for (int j = 0; j < list.size() - i - 1; j++) {
            if (list.at(j) > list.at(j + 1)) {
                swap(list.at(j), list.at(j + 1));
                swapped = true;
            }
        }

        if (swapped == false) {
                break;
            }
    }

    return list;
}