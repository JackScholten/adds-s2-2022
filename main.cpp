#include <iostream>

#include "Individual.h"


using namespace std;

int main() {

Individual a(10);
Individual b(a.getString());


cout << b.getString() << endl;
b.flipBit(1);
b.flipBit(2);

b.flipBit(5);
b.flipBit(6);
b.flipBit(7);

cout << b.getString() << endl;
cout << b.getMaxOnes() << endl;

    return 0;    
}