#include "FilterForTwoDigitPositive.h"

using namespace std;

FilterForTwoDigitPositive::FilterForTwoDigitPositive() {};

bool FilterForTwoDigitPositive::g(int x) {

    if(x>9 && x<100) {
        return true;
    }
    
    return false;
}