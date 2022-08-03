#include <iostream>
#include "Human.h"

using namespace std;

Human::Human() { this->move = 'M';  };

char Human::MakeMove() { 

    cout << "Make your move: " << endl;
    cin >> this->move;

    while(this->move != 'R' && this->move != 'P' && this->move != 'S') {

        cout << "This move is not valid" << endl;

        cout << "Make a different move: " << endl;
        cin >> this->move;

    };

    return this->move;
};
