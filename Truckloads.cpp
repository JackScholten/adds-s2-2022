#include "Truckloads.h"
#include <iostream>

using namespace std;

Truckloads::Truckloads() {};

int Truckloads::numTrucks(int numCrates, int loadSize) {

// Condition checking 
    if(numCrates <= 0) {
        cout << "ERROR" << endl;
        return 0;
    }

// Base condition 

    if(numCrates <= loadSize) {

        return 1;
    }

// Recursion

    int numCrates1;
    int numCrates2;

    if(numCrates%2 == 0) {
        numCrates1 = numCrates/2;
        numCrates2 = numCrates/2;
    } else {
        numCrates1 = numCrates/2;
        numCrates2 = numCrates1 + 1;
    }

    return numTrucks(numCrates1, loadSize) + numTrucks(numCrates2, loadSize); 
}