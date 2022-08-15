#include "Player.h"

Player::Player() { this->move = 'I'; }

void Player::makeMove() { }

char Player::getMove() {

return this->move;

}

void Player::setMove(char a) { this->move = a; }