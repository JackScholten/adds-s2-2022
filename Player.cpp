using namespace std;

#include "Player.h"

Player::Player() { this->move = 'I'; }

void Player::makeMove() { setMove('T'); }

char Player::getMove() {

return this->move;

}

void Player::setMove(char a) { this->move = a; }