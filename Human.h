#ifndef _Human
#define _Human

#include "Player.h"

class Human : public Player {
    private:
        char store;

    public:
        Human();
        void makeMove();
        char getMove();

};

#endif 