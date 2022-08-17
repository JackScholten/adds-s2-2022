#ifndef _Book
#define _Book

#include "Document.h"

class Book : public Document {
    public:
        Book();
        Book(int _ID); 
        virtual int getDocumentID();
        
};


#endif