#include "Referee.h"

using namespace std;

Referee::Referee() { this->result = 'I'; }

char Referee::refGame(Human player1, Computer player2) { 

player1.makeMove();
player2.makeMove();

if( player1.getMove() == player2.getMove() ) {  
        this->result = 'T';
        return this->result; };

if( (player1.getMove() == 'R' && player2.getMove() == 'S') || 
    (player1.getMove() == 'S' && player2.getMove() == 'P') ||
    (player1.getMove() == 'P' && player2.getMove() == 'R') ) {  
        this->result = 'W';
        return this->result; };

if( (player1.getMove() == 'R' && player2.getMove() == 'P') || 
    (player1.getMove() == 'S' && player2.getMove() == 'R') ||
    (player1.getMove() == 'P' && player2.getMove() == 'S') ) {  
        this->result = 'L';
        return this->result; };

return 'I';
}

char Referee::getResult() {

    return result;

}