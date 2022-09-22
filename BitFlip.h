#ifndef _BitFlip
#define _BitFlip

#include "Mutator.h"

class BitFlip : public Mutator {
    public:
        BitFlip();

        virtual Individual mutate(Individual person, int k);


};

#endif
