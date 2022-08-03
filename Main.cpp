#include <iostream>
#include <string>
#include "Referee.h"

using namespace std;

int main() {

Human player1;
Computer player2;
Referee Ref;

player1.MakeMove();
player2.MakeMove();

Ref.RefGame(player1, player2);

cout << Ref.result << endl;

};