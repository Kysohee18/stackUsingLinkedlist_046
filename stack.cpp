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
bool isEmpty()
    {
        return top == NULL; // return true if the pointer is null , indicating an empty stack
    }
// pop operation : remoe the tompost element from the stack
    void pop () {
    if(isEmpty()) {
        cout << " stack is empty. " <<endl;
        return; // of the stack is empty, print message and return
    }
    cout << " popped value:  " << top->data << endl;
    top = top->next; // update the top pointer to the next node
    }
    void peek()
    {
        if (isEmpty())
        {
            cout <<"list is empty." << endl;
    }
        else
        {
            Node * current =top;
            while ( current != NULL)
            {
                cout << current->data <<"" << endl;
                current = current->next;
            }cout << endl;
        }
    }


};

int main()
{ stack stack;
    int choice = 0;
    int value;

    while (choice != 4)
    {
     cout << "1. push\n";
           cout << "2. pop\n";
       cout << "3. peek\n";
     cout <<"4. exit\n";	
        cout <<"Enter your choice";
        cin >> choice;
       switch( choice)
        {
            case 1:
            cout <<" enter the value to push: " ;
            cin >> value;
            stack.push(value); //push the entered value onte the stack
            break;
         
   


            

    
 



