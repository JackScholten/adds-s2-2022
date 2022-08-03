#include "Computer.h"

Computer::Computer() { this->move = 'I'; }

char Computer::makeMove() { 

    this->move = 'R';

    return this->move;
}