#ifndef _Player
#define _Player

class Player {
    private:
        char move;
    
    public:
        Player();
        virtual void makeMove();
        virtual char getMove();
        virtual void setMove(char a);

};

#endif