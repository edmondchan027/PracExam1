#include "Library.h"

Library::Library(){
    Library_docs= std::array<Document,8> {};
};

//add document to the library
void Library::addDocument(Document* doc){
    Library_docs.fill(*doc);
};

// check if a Document is in the Library
bool Library::hasDocument(){
    return !(Library_docs.empty());
};