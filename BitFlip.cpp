#include "BitFlip.h"

using namespace std;

BitFlip::BitFlip(){};

Individual* BitFlip::mutate(Individual* person, int k) {
    while (k > person->getLength()) {
        k = k - person->getLength();
    }

    person->flipBit(k - 1);

    return person;
}