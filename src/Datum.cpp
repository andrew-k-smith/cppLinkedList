/*
 * file: Datum.cpp
 * author: Andrew Smith
 * 
 * src file for Datum
 */
#include "../include/Datum.h"
//Default constructor
Datum::Datum()
{
    data = 0;
    setNext(NULL);
}
//Alternate constructor
Datum::Datum(float aData)
{
    setData(aData);
    setNext(NULL);
}
//Copy constructor
Datum::Datum(const Datum &Datum)
{
    setData(Datum.getData());
    setNext(Datum.getNext());
}
//Destructor
Datum::~Datum()
{
}
//Returns private member variable next
Datum *Datum::getNext() const
{
    return next;
}
//Set private member variable next
void Datum::setNext(Datum *aNext)
{
    next = aNext;
}
//Return private member variable data
float Datum::getData() const
{
    return data;
}
//set private member variable data
void Datum::setData(float aData)
{
    //check for valid data
    data = aData;
}