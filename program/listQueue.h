//Tyler Tackett
//Formal Program 1
//CS1350

#include<iostream>
#include <cassert>

using namespace std;

//A simple struct to define a node
struct node
{
    int info;
    node *link;
};

//Class for the Linked List Queue
class linkedListQueue
{
    public:
        //All Normal Queue Functions
        bool isEmpty();
        bool isFull();
        int frontOfList();
        int backOfList();
        void enqueue(const int& newNum);
        void dequeue();
        linkedListQueue(); 
        ~linkedListQueue(); 

    private:
        //Two pointers to keep track of front and back of the list
        node *front;
        node *back;
};

//Constructor the sets initial pointers to null
linkedListQueue::linkedListQueue()
{
    front = nullptr;
    back = nullptr;
}

//Deconstructor
linkedListQueue::~linkedListQueue()
{
    delete front;
    delete back;
}

//Checks to see if the List in empty
bool linkedListQueue::isEmpty()
{
    return(front == nullptr);
}

//The list is always "full" because it doesnt have a max size
bool linkedListQueue::isFull()
{
    return false;
}

//Returns the front value
int linkedListQueue::frontOfList()
{
    return front->info;
}

//returns the back value
int linkedListQueue::backOfList()
{
    return back->info;
}

//Pushes a new node into the List
void linkedListQueue::enqueue(const int& newNum)
{
    //Creates a new node
    node *newNode;
    newNode = new node; 

    //Sets the nodes value and sets it's next link to null
    newNode->info = newNum; 
    newNode->link = nullptr;  

    //If no nodes exist both front and back will equall the same node
    if (front == nullptr) 
    {
        front = newNode;
        back = newNode;
    }
    else
    //Links the current back node to the new node
    //Sets the new node as the new back node
    {
        back->link = newNode;
        back = back->link;
    }
}

//Removes a node from the list
void linkedListQueue::dequeue()
{
    //creates a temp node
    node *temp;
   
    if (isEmpty())
    {
        cout << "Cannot remove from an empty queue" << endl;
    }
    else
    {
        //creates a temp node and sets it to front
        temp = front;  
        //moves from to the next node
        front = front->link; 
        //delete temp
        delete temp;  

        if (front == nullptr) 
        {
            back = nullptr; 
        }                         
    }
}

        