#ifndef DATUM_H
#define DATUM_H

#include <iostream>
#include <cstdlib>

using namespace std;

class Datum
{
public:
    //Default Constructor
    Datum();
    //Alternate Constructor
    Datum(float);
    //Copy Constructor
    Datum(const Datum &);
    //Destructor
    ~Datum();
    //Getters and Setters
    float getData() const;
    void setData(float);
    Datum *getNext() const;
    void setNext(Datum &);

private:
    float data;
    Datum *next;
};

#endif //DATUM_H