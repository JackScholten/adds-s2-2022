#include <iostream>
#include "Referee.h"
#include "Computer.h"
#include "Human.h"

using namespace std;

int main() {

Human player1;
Computer player2;
Referee Ref;

Ref.refGame(player1, player2);

cout << Ref.result << endl;

};