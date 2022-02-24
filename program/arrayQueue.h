//Tyler Tackett
//Formal Program 1
//CS1350

#include<iostream>

using namespace std;

//This Class Creates a Queue Thats Powered by an Array
class arrayQueue
{
    public:
        //All Normal Functions of a Queue
        bool isFull();
        bool isEmpty();
        int frontOfQueue();
        int backOfQueue();
        void enqueue(const int& newNum);
        void dequeue();
        arrayQueue(int size);
        ~arrayQueue();

    private:
        //Variables to track important values
        int maxSize;
        int count;
        //Tracks the front of the array
        int front;
        //Tracks the end of the array
        int back;
        //Pointer points to an array
        int *myArray;
};

//Array Queue Constructor
arrayQueue::arrayQueue(int size)
{
    //sets max size of the array
    maxSize = size;

    //Sets front to the first value of the array
    front = 0;
    //Sets count to 0
    count = 0;
    //Sets back to last value in the array
    back  = maxSize - 1;

    //Makes a new array of maxSize
    myArray = new int[maxSize];
}

//Destructor
arrayQueue::~arrayQueue()
{
    delete myArray;
}

//Checks to see if the Queue is full
bool arrayQueue::isFull()
{
    return (count == maxSize);
}

//Checks to see if the Queue is empty
bool arrayQueue::isEmpty()
{
    return (count == 0);
}

//Gets the front value of the array
int arrayQueue::frontOfQueue()
{
    return myArray[front];
}

//Gets the back value of the array
int arrayQueue::backOfQueue()
{
    return myArray[back];
}

//Adds values to the Queue
void arrayQueue::enqueue(const int& newNum)
{
    if(isFull())
    {
        cout << "Array is Full, you can't add any more ints" << endl;
    }
    else
    {
        //If the Queue isn't full move back into a new spot and all a value into that cell
        back = (back + 1) % maxSize;
        count++;
        myArray[back] = newNum;
    }
}

void arrayQueue::dequeue()
{
    if(isEmpty())
    {
        cout << "Array is empty, you can't take anymore Ints out" << endl;
    }
    else
    {
        //If the Queue isn't empty move front to the next sport in the array and return the value in the new cel
        front = (front + 1) % maxSize;
        count = count - 1;
    }
}