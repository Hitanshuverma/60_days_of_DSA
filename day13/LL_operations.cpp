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
        void update_next(node * obj)
        {
            ptr = obj;
        }
        void update_val(int val)
        {
            this -> val = val;
        }
};

//menu func
void menu()
{
    cout<<endl;
    cout<<"1. Insert"<<endl
        <<"2. Modify"<<endl
        <<"3. Delete"<<endl;
}

// creation func
void createlist(node * obj)
{
    int n = 0, val = 0;
    cout<<"Enter the number of nodes you want to make"<<endl;
    cin>>n;
    for (int i = 0; i < n - 1; i++)
    {
        node *ptr = new node;
        cout<<"Enter the value"<<endl;
        cin>>val;
        obj -> getdata(val, ptr);
        obj = ptr;
    }
    //now getting the last element
    cout<<"Enter the value"<<endl;
    cin>>val;
    obj -> getdata(val, NULL);
}

//print func
void printnode(node * obj)
{
    cout<<"The values in the list are"<<endl;
    do
    {
        obj -> display();
        obj = obj -> next();
    } while (obj != NULL);
}

//insertion func
void insert_node(node * obj)
{
    node *element = new node;
    node *head = obj;
    int val = 0, pos = 0;
    printnode(obj);
    cout<<"Enter the pos at which you to insert"<<endl;
    cin>>pos;
    cout<<"Enter the value you want to insert"<<endl;
    cin>>val;
    for(int i = 1; i < pos - 1; i++)
    {
        obj = obj -> next();
    }
    element -> getdata(val, obj -> next());
    obj ->update_next(element);
    printnode(head);
}

//modification func
void modify_node(node * obj)
{
    node *head = obj;
    int val = 0, pos = 0;
    printnode(obj);
    cout<<"Enter the pos you want to modify "<<endl;
    cin>>pos;
    cout<<"Enter the new value "<<endl;
    cin>>val;
    for(int i = 1; i < pos; i++)
    {
        obj = obj -> next();
    }
    obj -> update_val(val);
    printnode(head);
}

//deletion of node
void delete_node(node * obj)
{
    node *head = obj;
    int pos = 0;
    printnode(obj);
    cout<<"Enter the pos you want to delete "<<endl;
    cin>>pos;
    for(int i = 1; i < pos - 1; i++)
    {
        obj = obj -> next();
    }
    node *temp = obj;
    temp = temp ->next();
    obj -> update_next(temp ->next());
    printnode(head);
}

//main func
int main()
{ 
    node *head = new node;
    createlist(head);
    printnode(head);
    int choice = 0;
    menu();
    cout<<"Enter your choice"<<endl;
    cin>>choice;
    switch(choice)
    {
        case 1:
            insert_node(head);
            break;
        case 2:
            modify_node(head);
            break;
        case 3:
            delete_node(head);
            break;
        default:
            cout<<"Wrong choice"<<endl;
            break;
    }
    return 0;
}