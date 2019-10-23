#include <iostream>
#include "../include/myLList.h"

using namespace std;

int main(int argc, char const *argv[])
{
    myLList ll;
    cout << "Creating new LL called ll" << endl;
    float anArray[20];
    for(int i=0;i<20;i++){
        anArray[i] = i;
        ll.add(i);
    }
    cout << "Printing ll" << endl;
    ll.print();
    ll.remove(10);
    cout << "Size of ll is: " << ll.getSize() << endl;
    cout << "Printing ll" << endl;
    ll.print();
    ll.insert(4.5, 5);
    cout << "Printing ll" << endl;
    ll.print();
    cout << "Size of ll is: " << ll.getSize() << endl;
    myLList ll1;
    cout << "Creating new LL called ll1" << endl;
    for(int i=0;i<5;i++){
        ll1.add(i);
    }
    cout << "Size of ll1 is: " << ll1.getSize() << endl;
    cout << "Printing ll1" << endl;
    ll1.print();
    cout << "Concatenating ll1 onto ll" << endl;
    ll+ll1;
    cout << "Size of ll is: " << ll.getSize() << endl;
    cout << "Printing ll" << endl;
    ll.print();
    cout << "Printing ll1" << endl;
    ll1.print();
    cout << "Setting ll1 equal to ll" << endl;
    ll1=ll;
    cout << "Size of ll1 is: " << ll1.getSize() << endl;
    cout << "Size of ll is: " << ll.getSize() << endl;
    cout << "Printing ll" << endl;
    ll.print();
    cout << "Printing ll1" << endl;
    ll1.print();
    myLList ll2(sizeof(anArray)/sizeof(*anArray), anArray);
    ll2.print();
    return 0;
}
