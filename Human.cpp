#include <iostream>
#include <string>
#include "Human.h"

using namespace std;

Human::Human() { setMove('I');  }

void Human::makeMove() { 

    cout << "Enter Move: ";
    cin >> this->store;

    while(this->store != 'R' && this->store != 'P' && this->store != 'S') {

        cout << "This move is not valid" << endl;

        cout << "Make a different move: " << endl;
        cin >> this->store;

    }

}

char Human::getMove() {

    return store;
    
}