#include "Reverse.h"
#include <string>
#include <cmath>

using namespace std;

Reverse::Reverse() {};

int Reverse::reverseDigit(int value) {

// Bade Condition
    if(value < 10) {
        return value;
    }

// Recersion

    return pow(10 , (floor(log10(value) + 1)) - 1)*(value%10) + reverseDigit(value/10);

}


string Reverse::reverseString(string letters) {
    
    // Base condition
        if(letters.size() <= 1) {
            return letters;
        }

    // Recersoion

    return letters.at(letters.size() - 1) + reverseString(letters.substr(0, letters.size() - 1));
}