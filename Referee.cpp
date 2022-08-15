#include "Referee.h"

using namespace std;

Referee::Referee() { this->result = 'I'; }

char Referee::refGame(Player * a, Player * b) { 

a->makeMove();
b->makeMove();

if( a->getMove() == b->getMove() ) {  
        this->result = 'T';
        return this->result; };

if( (a->getMove() == 'R' && b->getMove() == 'S') || 
    (a->getMove() == 'S' && b->getMove() == 'P') ||
    (a->getMove() == 'P' && b->getMove() == 'R') ) {  
        this->result = 'W';
        return this->result; };

if( (a->getMove() == 'R' && b->getMove() == 'P') || 
    (a->getMove() == 'S' && b->getMove() == 'R') ||
    (a->getMove() == 'P' && b->getMove() == 'S') ) {  
        this->result = 'L';
        return this->result; };

return 'I';
}

char Referee::getResult() {

    return result;

}