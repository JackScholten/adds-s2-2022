#include "MapGeneric.h"
#include "MapTriple.h"
#include "MapSquare.h"
#include "MapAbsoluteValue.h"
#include "FilterGeneric.h"
#include "FilterOdd.h"
#include "FilterNonPositive.h"
#include "FilterForTwoDigitPositive.h"
#include "ReduceGeneric.h"
#include "ReduceMinimum.h"

#include <iostream>

using namespace std;

void PrintArray(vector<int> input) {
    for(int i = 0; i<(input.size()); i++) {
        cout << input.at(i) << endl;
    }

}

int main() {

    vector<int> input {14, 1, 323, 24};
    vector<int> bet {14, 2, 323, 24};

    ReduceMinimum a;

    cout << a.reduce(input) << endl;
    cout << a.reduce(bet) << endl;

    return 0;
}