#include <iostream>
#include "../include/myLList.h"

using namespace std;

int main(int argc, char const *argv[])
{
    cout << "Main method\n";
    myLList ll;
    ll.add(1);
    cout << ll.getHead() << endl;
    cout << ll.getTail() << endl;
    ll.add(2);
    cout << ll.getHead() << endl;
    cout << ll.getTail() << endl;
    ll.add(3);
    cout << ll.getHead() << endl;
    cout << ll.getTail() << endl;

    cout << ll.find(2) << endl;

    // Node *temp;
    // temp = &n1;
    // cout <<(*temp).getData() << endl;
    // temp = (*temp).getNext();
    // cout << (*temp).getData();



    return 0;
}
