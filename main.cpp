#include <iostream>
#include "Library.h"
#include "Document.h"
#include "Book.h"

using namespace std;

int main() {

//create a library
Library Uni;

//create a book

Document *p2;

Book * p1 = new Book(123);

p2 = p1;

//add book to library
Uni.addDocument( Uni.getShelf(), p2 );

//checks if book is in library 

Uni.hasDocument(Uni.getShelf());

return 0;
}