#include <iostream>
#include "Referee.h"


using namespace std;

int main() {

Human player1;
Computer player2;
Referee Ref;

Ref.refGame(player1, player2);

cout << Ref.getResult() << endl;

return 0;
};