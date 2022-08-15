#ifndef _Referee
#define _Referee

#include "Human.h"
#include "Computer.h"

class Referee {
    private:
        char result;

    public:
        Referee();
        char refGame(Player * a, Player * b);
        char getResult();

};

#endif

