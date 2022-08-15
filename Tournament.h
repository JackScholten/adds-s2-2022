#ifndef _Tournament
#define _Tournament

#include <array>

#include "Human.h"
#include "Computer.h"

class Tournament {
    private:
        std::array<Player *, 8> competitors;
        int index;

        int GameScore;
    
    public:
        Tournament();
        Player * run(std::array<Player *, 8>  competitors);
        void FillArray(std::array<Player *, 8>  competitors, Player * a);


        std::array<Player *, 8> getCompetitors();

        void GetArray(std::array<Player *, 8>  competitors);

};

#endif