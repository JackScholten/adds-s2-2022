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
#include "ReduceGCD.h"

#include <iostream>

using namespace std;

void PrintArray(vector<int> input) {
    for(int i = 0; i<(input.size()); i++) {
        cout << input.at(i) << endl;
    }

}

int main() {

    MapTriple a;
    MapAbsoluteValue b; 

    FilterOdd c;
    FilterForTwoDigitPositive d;

    ReduceMinimum e;
    ReduceGCD f;

    vector<int> input {6, -11, 53, -16, 73, 128, 105, 104, -71, -179, 102, 12, 21, -145, -99, 199, -156, -186, 43, -189};
    vector<int> result;

    result = b.map(input);
    result = a.map(result);

    result = c.filter(result);
    result = d.filter(result);

    cout << e.reduce(result) << " " << f.reduce(result) << endl;
   

    return 0;
}