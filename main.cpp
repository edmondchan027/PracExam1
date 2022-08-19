#include <iostream>
#include "Library.h"
#include "Book.h"
#include "Document.h"
#include <array>

int main(){

    Library* Lib1 = new Library;
    Book* B = new Book(12345);

    Lib1->addDocument(B);
    if(Lib1->hasDocument()){
        std::cout<<"The Library has Document"<<std::endl;
    }
    


    return 0;
}