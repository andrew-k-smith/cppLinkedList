#ifndef MYLLIST_H
#define MYLLIST_H

#include <cstdlib>
#include "Datum.h"

using namespace std;
class myLList
{
public:
    myLList();
    myLList(int, float *anArray);
    myLList(const myLList &);
    ~myLList();
    void operator+(const myLList &);
    void operator=(const myLList &); 
    Datum operator[](int);
    bool operator==(const myLList &); 
    void add(float aData);
    void insert(float, int);
    void remove(int index);
    void print();
    Datum *find(float aData);
    Datum *getHead();
    Datum *getTail();
    int getSize();

private:
    Datum *head;
    Datum *tail;
    int size;
};

#endif // MYLLIST_H