#ifndef BOOK_H
#define BOOK_H

#include"Document.h"

class Book : public Document{
private:

int DocID;//Document ID

public:

Book();
Book(int id);
int getDocumentID();



};

#endif