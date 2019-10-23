#include "../include/Datum.h"

Datum::Datum(){
    //What does this mean

}
Datum::Datum(float aData)
{
    next = NULL;
    setData(aData);
}
Datum::Datum(const Datum &Datum)
{
    data = Datum.getData();
    next = Datum.getNext();
}
Datum::~Datum()
{
    //Don't need because never use new keyword
}
Datum *Datum::getNext() const
{
    return next;
}
void Datum::setNext(Datum &aNext)
{
    next = &aNext;
}
float Datum::getData() const
{
    return data;
}
void Datum::setData(float aData)
{
    //check for valid data
    data = aData;
}