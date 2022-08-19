#ifndef LIBRARY_H
#define LIBRARY_H

#include"Document.h"
#include <array>

class Library{
private:

std::array<Document,8> Library_docs;

public:

Library();

//add document to the library
void addDocument(Document* doc);

// check if a Document is in the Library
bool hasDocument();

};

#endif 