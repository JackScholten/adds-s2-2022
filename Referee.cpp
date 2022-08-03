#include <iostream>
#include <string>
#include "Referee.h"


using namespace std;

Referee::Referee() { this->result = 'M'; };

char Referee::RefGame(Human player1, Computer player2) { 

if( (player1.move == 'R' && player2.move == 'R') || 
    (player1.move == 'S' && player2.move == 'S') ||
    (player1.move == 'P' && player2.move == 'P') ) {  
        this->result = 'T';
        return this->result; };

if( (player1.move == 'R' && player2.move == 'S') || 
    (player1.move == 'S' && player2.move == 'P') ||
    (player1.move == 'P' && player2.move == 'R') ) {  
        this->result = 'W';
        return this->result; };

if( (player1.move == 'R' && player2.move == 'P') || 
    (player1.move == 'S' && player2.move == 'R') ||
    (player1.move == 'P' && player2.move == 'S') ) {  
        this->result = 'L';
        return this->result; };

return 'M';
}; 