#include "../include/myLList.h"

myLList::myLList()
{
    size = 0;
    head = NULL;
    tail = NULL;
}
myLList::myLList(const myLList &ll)
{
}
myLList::~myLList()
{
    while (head != NULL)
    {
        Datum *next = head->getNext();
        delete head;
        head = next;
    }
}
void myLList::add(float aData)
{
    // cout << "adding Datum" << endl;
    Datum *n = new Datum(aData);
    if (head == NULL)
    {
        // cout << "head was null\n";
        head = n;
        tail = n;
    }
    else
    {
        // cout << "head was not null\n";

        (*tail).setNext(*n);
        tail = n;
    }
}
Datum *myLList::find(float aData)
{
    Datum *temp = head;
    while (temp != NULL)
    {
        if ((*temp).getData() == aData)
            return temp;
        temp = temp->getNext();
    }
    //Didn't find Datum.
    return NULL;
}
Datum *myLList::getTail()
{
    return tail;
}
Datum *myLList::getHead()
{
    return head;
}