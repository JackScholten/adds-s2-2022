#include <iostream>
#include "Player.h"
#include "Avalanche.h"


using namespace std;

int main() {

Avalanche a;

a.makeMove();

cout << a.getMove() << endl;

return 0;
};