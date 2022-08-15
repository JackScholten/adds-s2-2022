using namespace std;

#include "FistfullODollars.h"

FistfullODollars::FistfullODollars() { setMove('I'); setCounter(0); }

void FistfullODollars::makeMove() { 
    
    if(getCounter() == 0) { setMove('R'); };

    if(getCounter() == 1) { setMove('P'); };

    if(getCounter() == 2) { setMove('P'); };

    setCounter( (getCounter() + 1) %3 );

}