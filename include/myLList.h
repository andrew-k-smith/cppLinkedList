#ifndef MYLLIST_H
#define MYLLIST_H

#include <cstdlib>
#include "Datum.h"

using namespace std;
class myLList
{
public:
    myLList();
    myLList(const myLList &);
    ~myLList();
    void add(float aData);
    Datum *find(float aData);
    Datum *getHead();
    Datum *getTail();

private:
    Datum *head;
    Datum *tail;
    int size;
};

#endif // MYLLIST_H