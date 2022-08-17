#ifndef _Document
#define _Document

#include <string>

class Document {
    private:
        int ID;

    public:
        virtual int getDocumentID() = 0;

    friend class Book;

};


#endif