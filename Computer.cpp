#include <iostream>
#include <string>
#include "Computer.h"

using namespace std;

Computer::Computer() { this->move = 'M'; };

char Computer::MakeMove() { 

    this->move = 'R';

    return this->move;
};