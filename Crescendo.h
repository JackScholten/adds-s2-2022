#ifndef _Crescendo
#define _Crescendo

#include "Computer.h"

class Crescendo : public Computer {
    private:
        int counter;

    public:
        Crescendo();
        virtual void makeMove();
        void setCounter(int a);
        int getCounter();

};

#endif