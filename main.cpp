#include <iostream>
#include "Computer.h"
#include "Avalanche.h"
#include "Bureaucrat.h"
#include "Toolbox.h"


using namespace std;

int main() {

Toolbox a;

a.makeMove();

cout << a.getMove() << endl;

return 0;
};