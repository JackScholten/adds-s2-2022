#include "Player.h"

Player::Player() { this->move = 'I'; }

void Player::makeMove() { }

char Player::getMove() {

return this->move;

}

void Player::setMove(char a) { this->move = a; }

void Player::setCounter(int a) { this->counter = a; }

int Player::getCounter() { return this->counter; }