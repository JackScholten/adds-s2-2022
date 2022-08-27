#include "Reverse.h"
#include "Truckloads.h"
#include "EfficientTruckloads.h"
#include <iostream>
#include <string>

using namespace std;

int main() {

Reverse a;

cout << a.reverseDigit(123) << endl;

cout << a.reverseString("a") << endl;

Truckloads b;

cout << b.numTrucks(10 , 2) << endl;

EfficentTruckloads c;

cout << c.numTrucks(10,2) << endl;

}


