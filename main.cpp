#include <iostream>
#include <string>

using namespace std;

int Power(int x, int n) {

// Condition checking 
if(n < 0 ) {
    cout << "Error" << endl;
    return 0;
}

//Base Case
if(n == 0) {
    return 1;
}

// Recursion 
return x*Power(x, (n - 1));

};

double Series(double i) {

//Condition checking
if(i < 1){
    cout << "Error" << endl;
    return 0;
}

//Base Condition
if(i == 1) {
    return 0.5;
}

//Recursion
return i/(i+1) + Series((i - 1));

};

string Permutations(string a) {



};


int main() {

cout << Power(3, 3) << endl;

cout << Series(4) << endl;

};