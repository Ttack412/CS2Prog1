#include<iostream>
#include "arrayStack.h"
#include "listStack.h"

using namespace std;

int main()
{
    //ARRAY STACK
    int inputValues;
    int arraySize;

    cout << "Enter a Size For The Array Stack" << endl;
    cin >> arraySize;

    //Creates an Array Stack and gives it a size
    arrayStack myArrayStack(arraySize);

    cout << "Enter " << arraySize << " Digits" << endl;

    //Fills in the Array Stack
    for(int i = 0; i < arraySize; i++)
    {
        cin >> inputValues;
        myArrayStack.push(inputValues);
    }
    
    cout << "When You Pop Off All The Elements In The Array Stack You Get: " << endl;

    //Empties out the Array Stack
    while(!myArrayStack.isEmpty())
    {
        cout << myArrayStack.topOfStack() << endl;
        myArrayStack.pop();
    }

    //LINKED LIST QUEUE
    int listSize;
    listStack myLLStack;

    //Gets a "size" for the List that's used to create a specific amount of nodes
    cout << "How Many Nodes Would You Like Your Linked List Stack To Have?" << endl;
    cin >> listSize;

    //Fills in a specified amount of nodes
    cout << "Enter Int Values for All The Nodes" << endl;
    for(int i  = 0; i < listSize; i++)
    {
        cin >> inputValues;
        myLLStack.push(inputValues);
    }

    cout << "When You Pop Off All The Elements In The Linked List Stack You Get: " << endl;

    //Empties all the nodes
    while(!myLLStack.isEmpty())
    {
        cout << myLLStack.topOfStack() << endl;
        myLLStack.pop();
    }

    return 0;
}