#ifndef _Player
#define _Player

class Player{
    private:
        char move;
        int counter;
    
    public:
        Player();
        virtual void makeMove();
        virtual char getMove();
        virtual void setMove(char a);
        virtual void setCounter(int a);
        virtual int getCounter();

};

#endif 