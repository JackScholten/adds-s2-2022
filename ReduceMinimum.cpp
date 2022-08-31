#include "ReduceMinimum.h"

using namespace std;

ReduceMinimum::ReduceMinimum() {};

int ReduceMinimum::binaryOperator(int a, int b) {

if(a < b) {
    return a;
}

return b;
}