#ifndef _PaperDoll
#define _PaperDoll

#include "Computer.h"

class PaperDoll : public Computer {
    private:
        int counter;

    public:
        PaperDoll();
        virtual void makeMove();
        void setCounter(int a);
        int getCounter();

};

#endif