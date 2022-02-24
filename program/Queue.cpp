#include<iostream>
#include "arrayQueue.h"
#include "listQueue.h"

using namespace std;

int main()
{
    //ARRAY QUEUE
    int inputValues;
    int arraySize;

    cout << "Enter a Size For The Array Queue" << endl;
    cin >> arraySize;

    //Creates an Array Queue and gives it a size
    arrayQueue myArrayQueue(arraySize);

    cout << "Enter " << arraySize << " Digits" << endl;

    //Fills in the Array Queue
    for(int i = 0; i < arraySize; i++)
    {
        cin >> inputValues;
        myArrayQueue.enqueue(inputValues);
    }
    
    cout << "When You Dequeue All The Elements In The Array Queue You Get: " << endl;

    //Empties out the Array Queue
    while(!myArrayQueue.isEmpty())
    {
        cout << myArrayQueue.frontOfQueue() << endl;
        myArrayQueue.dequeue();
    }

    //LINKED LIST QUEUE
    int listSize;
    linkedListQueue myLLQueue;

    //Gets a "size" for the List that's used to create a specific amount of nodes
    cout << "How Many Nodes Would You Like Your Linked List Queue To Have?" << endl;
    cin >> listSize;

    //Fills in a specified amount of nodes
    cout << "Enter Int Values for All The Nodes" << endl;
    for(int i  = 0; i < listSize; i++)
    {
        cin >> inputValues;
        myLLQueue.enqueue(inputValues);
    }

    cout << "When You Dequeue All The Elements In The Linked List Queue You Get: " << endl;

    //Empties all the nodes
    while(!myLLQueue.isEmpty())
    {
        cout << myLLQueue.frontOfList() << endl;
        myLLQueue.dequeue();
    }

    return 0;
}