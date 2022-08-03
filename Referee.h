#include "Human.h"
#include "Computer.h"

using namespace std;

class Referee {
    public:
        char result;

    public:
        Referee();
        char RefGame(Human player1, Computer player2);

};

