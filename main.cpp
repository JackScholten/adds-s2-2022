#include <iostream>
#include "Library.h"
#include "Document.h"
#include "Book.h"

using namespace std;

int main() {

//create a library
Library Uni;
//create a book

//add book to library
Uni.addDocument( Uni.getShelf(), new Book(123));

//checks if book is in library 

Uni.hasDocument(Uni.getShelf());


return 0;
}