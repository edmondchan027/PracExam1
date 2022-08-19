#include "Book.h"

Book::Book(){

    DocID=0;

};

Book::Book(int id){

DocID=id;

};

int Book::getDocumentID(){
    return DocID;
};