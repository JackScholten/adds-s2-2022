#include "BitFlipProb.h"

#include <stdlib.h>
#include <time.h>

using namespace std;

BitFlipProb::BitFlipProb() { this->p = 0.5; }

BitFlipProb::BitFlipProb(double _p) { this->p = _p; }

Individual* BitFlipProb::mutate(Individual* person) {
    srand((unsigned)time(NULL));

    for (int i = 0; i < person->getLength(); i++) {
        if (this->p < (double)rand() / RAND_MAX) {
            person->flipBit(i);
        }
    }

    return person;
}