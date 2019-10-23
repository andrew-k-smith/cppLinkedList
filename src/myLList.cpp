#include "../include/myLList.h"

myLList::myLList()
{
    size=0;
    //A default linked list has a NULL head and tail
    head = NULL;
    tail = NULL;
}
//Question
//How to get size of array other than in parameters
//note -- can't pass in pointer or won't get correct size in param. Must pass in array[]
myLList::myLList(int arraySize, float *anArray){
    //call default here?
    size=0;
    head=NULL;
    tail=NULL;
    for(int i=0;i<arraySize;i++){
        add(anArray[i]);
    }
}

//Copy Constructor
myLList::myLList(const myLList &ll)
{
    //call default here?
    size=0;
    head = NULL;
    tail = NULL;
    Datum *temp = ll.head;
    while(temp!=NULL){
        add((*temp).getData());
        temp=temp->getNext();
    }
}
//Destructor
myLList::~myLList()
{
    //Deallocating memory for each Datum in LL
    while (head != NULL)
    {
        Datum *next = head->getNext();
        delete head;
        head = next;
    }
    size=0;
}
//Question
//Option 1 - RHS is const and LHS is edited
//Option 2 - RHS and LHS are const and returns new OBJ
//Does not return, just concatenates rhs to lhs, not altering rhs, but altering lhs
//should change after overloading = operator
void myLList::operator+(const myLList &rhs)
{
    //init temp datum to head of rhs
    Datum *temp = rhs.head;
    //iterate through rhs
    while (temp != NULL)
    {
        //add each datum of rhs to lhs
        add((*temp).getData());
        //iterate
        temp = temp->getNext();
    }
}
void myLList::operator=(const myLList &rhs){
    //effectively calling destructor for this object (should I change)
    //Deallocating memory for each Datum in LL
    while (head != NULL)
    {
        Datum *next = head->getNext();
        delete head;
        head = next;
    }
    size=0;
    //now lhs is an empty LL
    //To iterate through rhs
    Datum *temp = rhs.head;
    //iterate until temp is NULL
    while(temp!=NULL){
        //add new datum with data at temp to LHS
        add((*temp).getData());
        //iterate to next datum in RHS
        temp=temp->getNext();
    }
}
Datum myLList::operator[](int index){
    Datum *temp = head;
    for(int i=0;i<index;i++){
        temp=temp->getNext();
    }
    return *temp;
}
bool myLList::operator==(const myLList &rhs){
    //If lists aren't same size, no chance they are equal
    if(size!=rhs.size)
        return false;
    //check equality index-wise
    Datum *temp=head;
    Datum *temp1=rhs.head;
    //iterate through both LL which are the same size
    while(temp!=NULL){
        //if any index-wise data are not equal between LHS and RHS, we decide these LL are not equal
        if((*temp).getData()!=(*temp1).getData())
            return false;
    }
    //here implies LL are equal
    return true;
}
void myLList::add(float aData)
{
    //Allocating memory for new datum (needs to be deleted)
    Datum *n = new Datum(aData);
    if (head == NULL)
    //Head is null (this is first Datum in LL)
    {
        //First datum is head AND tail
        head = n;
        tail = n;
    }
    else
    //Head is not null
    {
        //Current tail points to new datum
        (*tail).setNext(*n);
        //Tail points to new datum
        tail = n;
    }
    size++;
}
void myLList::insert(float aData, int index)
{
    cout << "Inserting datum at index: " << index << " with value: " << aData << endl;
    //To iterate through LL
    Datum *temp = head;
    //Iterate to Datum that points to index
    for (int i = 0; i < index - 1; i++)
    {
        temp = temp->getNext();
    }
    //Init new datum to insert at index
    Datum *datumToInsert = new Datum(aData);
    //Point datumToInsert to current Datum at index
    (*datumToInsert).setNext(*(temp->getNext()));
    //point index-1 to datumToInsert
    (*temp).setNext(*datumToInsert);
    size++;
}
void myLList::remove(int index)
{
    cout << "Removing datum at index: " << index << endl;
    //To iterate through LL
    Datum *temp = head;
    //Iterate to Datum that points to index
    for (int i = 0; i < index - 1; i++)
    {
        temp = temp->getNext();
    }
    //Pointer to Datum to remove
    Datum *del = temp->getNext();
    //Set next attribute of Datum temp to the next attribute of the value of next Datum
    (*temp).setNext(*(temp->getNext())->getNext());
    //Deallocate Datum that was removed
    delete del;
    size--;
}
void myLList::print()
{
    Datum *temp = head;
    while (temp != NULL)
    {
        cout << temp->getData();
        if ((*temp).getNext() != NULL)
            cout << ", ";
        temp = temp->getNext();
    }
    cout << endl;
}
//finds the first Datum with a specific data value and returns (not needed for 240Assignment06)
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
//returns private member variable tail
Datum *myLList::getTail()
{
    return tail;
}
//returns private member variable head
Datum *myLList::getHead()
{
    return head;
}
int myLList::getSize(){
    return size;
}