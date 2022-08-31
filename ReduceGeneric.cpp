#include "ReduceGeneric.h"
#include <vector>

using namespace std;

int ReduceGeneric::reduce(vector<int> input) {

    

    //Base Case
        if(input.size() == 1) {
            return input.at(0);
        }

    //Recursion

        if( input.at(0) == binaryOperator(input.at(0), input.at(1))) {
            input.at(0) = binaryOperator(input.at(0), input.at(1));
            input.erase(input.begin() + 1);
        } else {
            input.at(1) = binaryOperator(input.at(0), input.at(1));
            input.erase(input.begin());
        }

        return reduce(input);

}