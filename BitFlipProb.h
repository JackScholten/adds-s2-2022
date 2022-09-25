#ifndef _BitFlipProb
#define _BitFlipProb

#include "Mutator.h"

class BitFlipProb : public Mutator {
   private:
    double p;

   public:
    BitFlipProb();
    BitFlipProb(double _p);

    virtual Individual* mutate(Individual* person);
};

#endif
