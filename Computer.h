#ifndef _Computer
#define _Computer

#include "Player.h"

class Computer : public Player {
    public:
        Computer();
        virtual void makeMove();

};

#endif