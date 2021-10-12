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
    cout<<"The values in the list are"<<endl;
    do
    {
        obj -> display();
        obj = obj -> next();
    } while (obj != NULL);
}
void createlist(node * obj)
{
    int n = 0, val = 0;
    node *first = new node;
    first = obj;
    cout<<"Enter the number of nodes you want to make"<<endl;
    cin>>n;
    for (int i = 0; i < n - 1; i++)
    {
        node *ptr = new node;
        cout<<"Enter the value"<<endl;
        cin>>val;
        first -> getdata(val, ptr);
        first = ptr;
    }
    //now getting the last element
    cout<<"Enter the value"<<endl;
    cin>>val;
    first -> getdata(val, NULL);
}
int main()
{ 
    node *head = new node;
    // node *ptr2 = new node; 
    // node *ptr3 = new node;
    // node *ptr4 = new node;
 
    // head -> getdata(7, ptr2);
    // ptr2 -> getdata(8, ptr3);
    // ptr3 -> getdata(9, ptr4);
    // ptr4 -> getdata(10, NULL);

    createlist(head);
    printnode(head);
    return 0;
}