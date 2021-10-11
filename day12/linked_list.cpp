#include <iostream>

using namespace std;

class node
{
    int val;
    node *ptr;
    public:
        node()
        {
            val = 0;
            ptr = NULL;
        }
        void getdata(int val, node * obj)
        {
            this -> val = val;
            ptr = obj;
        }
        void display()
        {
            cout<<val<<endl;
        }
        node * next()
        {
            return ptr;
        }
};

void printnode(node * obj)
{
    // obj -> nxt() -> display();
    do
    {
        obj -> display();
        obj = obj -> next();
    } while (obj != NULL);
}
int main()
{ 
    node *head = new node;
    node *ptr2 = new node; 
    node *ptr3 = new node;
    node *ptr4 = new node;
 
    head -> getdata(7, ptr2);
    ptr2 -> getdata(8, ptr3);
    ptr3 -> getdata(9, ptr4);
    ptr4 -> getdata(10, NULL);

    printnode(head);
    return 0;
}