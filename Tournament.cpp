#include <array>
#include "Tournament.h"
#include "Player.h"
#include "Referee.h"
#include <iostream>

using namespace std;

Tournament::Tournament() { array<Player *, 8> competitors; }

void Tournament::FillArray(std::array<Player *, 8>  competitors, Player * a) {

    competitors.at(index) = a;

    index++;

}

void Tournament::GetArray(std::array<Player *, 8>  competitors) {

    for(int i = 0; i<index; i++) {

        cout << competitors.at(i) << endl;

    };
}

std::array<Player *, 8> Tournament::getCompetitors() { return this->competitors; };

Player * Tournament::run(std::array<Player *, 8>  competitors) {

Referee Jack;

    this->GameScore = 0;

    competitors.at(0)->setCounter(0);
    competitors.at(1)->setCounter(0);

for(int i = 0; i<5; i++) {

    Jack.refGame(competitors.at(0) , competitors.at(1) );

    if(Jack.getResult() == 'W') {

        this->GameScore++;

    }

    if(Jack.getResult() == 'L') {

        this->GameScore--;

    }

};

if(GameScore >= 0) { competitors.at(1) = competitors.at(0); } else { 
    competitors.at(0) = competitors.at(1);
}

this->GameScore = 0;

    competitors.at(2)->setCounter(0);
    competitors.at(3)->setCounter(0);

for(int i = 0; i<5; i++) {

    Jack.refGame(competitors.at(2) , competitors.at(3) );

    if(Jack.getResult() == 'W') {

        this->GameScore++;

    }

    if(Jack.getResult() == 'L') {

        this->GameScore--;

    }

};

if(GameScore >= 0) { competitors.at(3) = competitors.at(2); } else { 
    competitors.at(2) = competitors.at(3);
}

this->GameScore = 0;

    competitors.at(4)->setCounter(0);
    competitors.at(5)->setCounter(0);

    for(int i = 0; i<5; i++) {

    Jack.refGame(competitors.at(4) , competitors.at(5) );

    if(Jack.getResult() == 'W') {

        this->GameScore++;

    }

    if(Jack.getResult() == 'L') {

        this->GameScore--;

    }

};

if(GameScore >= 0) { competitors.at(5) = competitors.at(4); } else { 
    competitors.at(4) = competitors.at(5);
}

this->GameScore = 0;

    competitors.at(6)->setCounter(0);
    competitors.at(7)->setCounter(0);

    for(int i = 0; i<5; i++) {

    Jack.refGame(competitors.at(6) , competitors.at(7) );

    if(Jack.getResult() == 'W') {

        this->GameScore++;

    }

    if(Jack.getResult() == 'L') {

        this->GameScore--;

    }

};

if(GameScore >= 0) { competitors.at(7) = competitors.at(6); } else { 
    competitors.at(6) = competitors.at(7);
}

this->GameScore = 0;

    competitors.at(1)->setCounter(0);
    competitors.at(3)->setCounter(0);

for(int i = 0; i<5; i++) {

    Jack.refGame(competitors.at(1) , competitors.at(3) );

    if(Jack.getResult() == 'W') {

        this->GameScore++;

    }

    if(Jack.getResult() == 'L') {

        this->GameScore--;

    }

};

if(GameScore >= 0) { competitors.at(3) = competitors.at(1); 
    competitors.at(2) = competitors.at(0); } else { 
    competitors.at(1) = competitors.at(3);
    competitors.at(0) = competitors.at(2);
}

this->GameScore = 0;

    competitors.at(4)->setCounter(0);
    competitors.at(6)->setCounter(0);

for(int i = 0; i<5; i++) {

    Jack.refGame(competitors.at(4) , competitors.at(6) );

    if(Jack.getResult() == 'W') {

        this->GameScore++;

    }

    if(Jack.getResult() == 'L') {

        this->GameScore--;

    }

};

if(GameScore >= 0) { competitors.at(6) = competitors.at(4); 
    competitors.at(7) = competitors.at(5); } else { 
    competitors.at(4) = competitors.at(6);
    competitors.at(5) = competitors.at(7);
}

this->GameScore = 0;

    competitors.at(0)->setCounter(0);
    competitors.at(7)->setCounter(0);

for(int i = 0; i<5; i++) {

    Jack.refGame(competitors.at(0) , competitors.at(7) );

    if(Jack.getResult() == 'W') {

        this->GameScore++;

    }

    if(Jack.getResult() == 'L') {

        this->GameScore--;

    }

};

if(GameScore >= 0) { return competitors.at(0); } else { 
    return competitors.at(7);
}

}