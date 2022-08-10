#ifndef _Referee
#define _Referee

#include "Human.h"
#include "Computer.h"

class Referee {
    private:
        char result;

    public:
        Referee();
        char refGame(Human player1, Computer player2);
        char getResult();

};

#endif

