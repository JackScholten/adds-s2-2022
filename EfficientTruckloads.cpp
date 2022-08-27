#include "EfficientTruckloads.h"

#define MaxCrates 100000
#define MaxLoad 1000

#include <array>

using namespace std;

EfficientTruckloads::EfficientTruckloads() {}

int EfficientTruckloads::numTrucks(int numCrates, int loadSize) {

static int trucks[MaxCrates][MaxLoad] = { };

// Base case 

if(numCrates <= loadSize) {

trucks[numCrates][loadSize] = 1;
return trucks[numCrates][loadSize];

}

// Recursion

if(trucks[numCrates][loadSize] == 0) {

    int numCrates1;
    int numCrates2;

    if(numCrates%2 == 0) {
        numCrates1 = numCrates/2;
        numCrates2 = numCrates/2;
    } else {
        numCrates1 = numCrates/2;
        numCrates2 = numCrates1 + 1;
    }

    trucks[numCrates][loadSize] = numTrucks(numCrates1, loadSize) + numTrucks(numCrates2, loadSize);

    }
    
return trucks[numCrates][loadSize];

}