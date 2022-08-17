#ifndef _Library
#define _Library

#include <array>

#include "Book.h"

class Library {
    private:
        std::array<Document *, 10> shelf;
        int index;

    public:
        Library();

        void addDocument(array<Document *, 10> shelf, Document * a);
        void hasDocument(array<Document *, 10> shelf);

};


#endif