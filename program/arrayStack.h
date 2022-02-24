//Tyler Tackett
//Formal Program 1
//CS1350

#include<iostream>

using namespace std;

//Class for implementing Stacks as an array
class arrayStack
{
public:

    //Required Stack Functions
    arrayStack(int size); 
    ~arrayStack(); 
    void push(const int& newNum);
    void pop();
    int topOfStack();
    int size();
    bool isEmpty();
    bool isFull();

private:

    //Variables to keep track of important information
    int maxSize; 
    int top;     
    int *myArray;       
};

//Contructor
arrayStack::arrayStack(int size)
{
    top = 0;
    maxSize = size;
    myArray = new int[maxSize];   
}

//Destructor
arrayStack::~arrayStack()
{
    delete myArray;
}   

//Adds values to the array stack
void arrayStack::push(const int& newNum)
{
    if(isFull())
    {
        cout << "You can't push anymore values, the stack is full" << endl;
    }
    else
    {
        //Sets newNum to where top is pointed to
        myArray[top] = newNum;
        //Moves top to the next spot
        top = top + 1;
    }
    
}

//Removes values from the array stack 
void arrayStack::pop()
{
    if(isEmpty())
    {
        cout << "The Stack is Empty, you can't take off any more values" << endl;
    }
    else
    {
        //Moves top down a spot
        top = top - 1;
    }
}

//Returns the value on the top of the array stack
int arrayStack::topOfStack()
{
    return myArray[top - 1];
}

//Returns size of the array stack
int arrayStack::size()
{
    return maxSize;
}

bool arrayStack::isEmpty()
{
    return (top == 0);
}

bool arrayStack::isFull()
{
    return (top == maxSize);
}
