#include <iostream>
#include "Human.h"
#include "Computer.h"
#include "Avalanche.h"
#include "Bureaucrat.h"
#include "Toolbox.h"
#include "RandomComputer.h"
#include "Crescendo.h"
#include "PaperDoll.h"
#include "FistfullODollars.h"

#include "Referee.h"
#include "Tournament.h"

using namespace std;

int main() {

Tournament Jew;


Jew.FillArray( Jew.getCompetitors() , new Avalanche() );
Jew.FillArray( Jew.getCompetitors() , new Bureaucrat() );
Jew.FillArray( Jew.getCompetitors() , new Bureaucrat() );
Jew.FillArray( Jew.getCompetitors() , new Toolbox() );
Jew.FillArray( Jew.getCompetitors() , new Toolbox() );
Jew.FillArray( Jew.getCompetitors() , new Crescendo() );
Jew.FillArray( Jew.getCompetitors() , new Crescendo() );
Jew.FillArray( Jew.getCompetitors() , new FistfullODollars() );

cout << Jew.run(Jew.getCompetitors()) << endl;

return 0;
};