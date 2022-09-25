#include <iostream>

#include "Individual.h"
#include "Mutator.h"
#include "BitFlip.h"
#include "BitFlipProb.h"
#include "Rearrange.h"

using namespace std;

Individual * execute(Individual * indPtr, Mutator * mPtr, int k) {

return mPtr->mutate(indPtr, k);

}

int main() {

string binarystr1;
cin >> binarystr1;

int k1;
cin >> k1;

string binarystr2;
cin >> binarystr2;

int k2;
cin >> k2;

Individual *One = new Individual(binarystr1);
Individual *Two = new Individual(binarystr2);

BitFlip *BitFlipPtr = new BitFlip();
Rearrange *RearrangePtr = new Rearrange();

One = execute(One, BitFlipPtr, k1);

Two = execute(Two, RearrangePtr, k2);

cout << One->getString() << " " << Two->getString() << " " << Two->getMaxOnes() << endl; 
    
    
    return 0;    
}

// int main() {

// string binarystr1 = "abcde";
// int k1 = 7;

// Individual *One = new Individual(binarystr1);

// auto *RearrangePtr = new Rearrange();

// One = execute(One, RearrangePtr, k1);

// cout << One->getString() << endl;

//     return 0;
// }