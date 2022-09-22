#include "BitFlip.h"

using namespace std;

Individual BitFlip::mutate(Individual person, int k) {

while( k > person.getLength() ) {

    k = k%10;

}

person.flipBit(k);

return person;

}