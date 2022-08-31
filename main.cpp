#include "MapGeneric.h"
#include "MapTriple.h"
#include "MapSquare.h"
#include "MapAbsoluteValue.h"

#include <iostream>

using namespace std;

void PrintArray(vector<int> input) {
    for(int i = 0; i<(input.size()); i++) {
        cout << input.at(i) << endl;
    }

}

int main() {

    vector<int> input {1, 2, 3, 4};
    vector<int> yer {-1, 2, -3, 4};

    MapTriple a;
    MapSquare b;
    MapAbsoluteValue c;

    PrintArray(a.map(input));
    cout << "NEXT" << endl;
    PrintArray(b.map(input));
    cout << "NEXT" << endl;
    PrintArray(c.map(yer));



    return 0;
}