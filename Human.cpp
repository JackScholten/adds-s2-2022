#include <iostream>
#include <string>
#include "Human.h"

using namespace std;

Human::Human() { this->move = 'M';  };

char Human::MakeMove() { 

    cout << "Make your move: " << endl;
    cin >> this->move;

    if(this->move != 'R' && this->move != 'P' && this->move != 'S') {

        cout << "This move is not valid";

    };

    return this->move;
};
