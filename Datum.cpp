#include "Datum.h"

Datum::Datum(float aData)
{
    cout << "Creating new Datum with data: " << aData << endl;
    next = NULL;
    setData(aData);
}
Datum::Datum(const Datum &Datum)
{
}
Datum::~Datum()
{
}
Datum *Datum::getNext()
{
    return next;
}
void Datum::setNext(Datum &aNext)
{
    next = &aNext;
}
float Datum::getData()
{
    return data;
}
void Datum::setData(float aData)
{
    //check for valid data
    data = aData;
}