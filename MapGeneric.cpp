#include "MapGeneric.h"
#include <vector>

using namespace std;

vector<int> MapGeneric::map(vector<int> input) {

    //Base Case
        if(input.size() == 0) {
            return result;
        }

    //Recursion
        result.push_back(f(input.at(0)));
        input.erase(input.begin());

        return map(input);

}