using namespace std;

#include "PaperDoll.h"

PaperDoll::PaperDoll() { setMove('I'); setCounter(0); }

void PaperDoll::makeMove() { 
    
    if(getCounter() == 0) { setMove('P'); };

    if(getCounter() == 1) { setMove('P'); };

    if(getCounter() == 2) { setMove('S'); };

    setCounter( (getCounter() + 1) %3 );
    
 }

