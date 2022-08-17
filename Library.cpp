#include "Library.h"
#include <iostream>

using namespace std;

Library::Library() { array<Document *, 10> shelf; }

void Library::addDocument( array<Document *, 10> shelf, Document * a) {

    shelf.at(index) = a;

    index++;

}



void Library::hasDocument(array<Document *, 10> shelf) { 

    if(shelf.empty() == true) {

        cout << "The shelf is empty" << endl;

    } else {

        cout << "The sheld is not empty" << endl;

    }

}


