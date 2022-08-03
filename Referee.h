#include "Human.h"
#include "Computer.h"

using namespace std;

class Referee {
    public:
        char result;

    public:
        Referee();
        char refGame(Human player1, Computer player2);

};

