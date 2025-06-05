#include <iostream>
using namespace std;
//node class representing a single node in the linked list
class Node
{
    public: 
    int data;
    Node *next;

    Node()
    {
        next = NULL;

    }
};

//stack class 
class stack
{
    private:
    Node *top; // pointer to the top node of the stack 
     public:
    stack()
    {
        top = NULL; // initialize the stack with a a null top pointer 
    }
    // push operation: insert a element onto the top of the stack 
    int push (int value)
    {
        Node *newNode = new Node();// 1.allocate memory for the new node
        newNode->data = value; // 2.assingn value
        newNode->next =top; // set the next pointer of the new node to the current top 
        top = newNode; // update the top pointer to the new node
        cout << "push value: " << value << endl;
        return value;
    }

 



