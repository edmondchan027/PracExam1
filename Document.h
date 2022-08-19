#ifndef DOCUMENT_H
#define DOCUMENT_H

class Document{
private:

int DocID;//Document ID

public:

Document();
Document(int id);
virtual int getDocumentID()=0;
//get the document id
//pure virtual function

};

#endif