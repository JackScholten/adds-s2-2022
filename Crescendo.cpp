using namespace std;

#include "Crescendo.h"

Crescendo::Crescendo() { setMove('I'); setCounter(0); }

void Crescendo::makeMove() { 
    
    if(getCounter() == 0) { setMove('P'); };

    if(getCounter() == 1) { setMove('S'); };

    if(getCounter() == 2) { setMove('R'); };

    setCounter( (getCounter() + 1) %3 );
 }
