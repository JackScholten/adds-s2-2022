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

        void addDocument(std::array<Document *, 10> shelf, Document * a);
        void hasDocument(std::array<Document *, 10> shelf);

        std::array<Document *, 10> getShelf();

};


#endif