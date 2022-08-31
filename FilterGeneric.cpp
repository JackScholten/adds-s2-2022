#include "FilterGeneric.h"
#include <vector>

using namespace std;

vector<int> FilterGeneric::filter(vector<int> input) {

    //Base Case
        if(input.size() == 0) {
            return result;
        }

    //Recursion
        if(g(input.at(0)) == 1) {
        result.push_back(input.at(0));
        }
        
        input.erase(input.begin());

        return filter(input);

}