//Tyler Tackett
//Formal Program 1
//CS1350

#include<iostream>

using namespace std;

//Basic nodes for the linked list
struct node
{
    int info;
    node *link;
};

//Class for implementing a Linked List as a Stack
class listStack
{
public:

    //All required stack functions
    listStack(); 
    ~listStack(); 
    void push(const int& newNum);
    void pop();
    int topOfStack();
    int currentSize();
    bool isEmpty();
    bool isFull();

private:

    //Parameters to store important information
    int size;
    node *top;          
};

//Constructor
listStack::listStack()
{
    top = nullptr;
    size = 0;
}

//Destructor
listStack::~listStack()
{
    delete top;
}

//Adds a new node to the list
void listStack::push(const int& newNum)
{
    //Creates a new node pointer
    node *newNode;
    //points the pointer to a new node
    newNode = new node; 

    //Fills in the new nodes variables
    newNode->info = newNum; 
    newNode->link = top; 
    //makes the new node top
    top = newNode;   

    //tracks the size of the list
    size = size + 1;    
}

//Removes a node from the list
void listStack::pop()
{
    if(isEmpty())
    {
        cout << "The Stack is empty, you can't remove any more values" << endl;
    }
    else
    {
        //creates a new node pointer
        node *newNode;

        //Makes the new node top
        newNode = top;
        //Moves the top pointer
        top = top->link;       
        //Deletes the New Nodes                 
        delete newNode;   

        //Tracks list size
        size = size - 1; 
    }
    
}

//Returns the value of the Top pointer
int listStack::topOfStack()
{
    return top->info;
}

//Returns the size of the list
int listStack::currentSize()
{
    return size;
}

bool listStack::isEmpty()
{
    return (top == nullptr);
}

bool listStack::isFull()
{
    return false;
}
