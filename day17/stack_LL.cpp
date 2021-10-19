#include <iostream>

using namespace std;

class stack
{
    int val;
    stack * next;
    public:
        stack()
        {
            val = 0;
            next = NULL;
        }
        void getdata(int val, stack * next)
        {
            this -> val = val;
            this -> next = next;
        }
        stack * return_next()
        {
            return next;
        }
        int get_val()
        {
            return val;
        }
};
stack * create(int n)
{
    stack * top = new stack;
    stack * prv = NULL;
    int num;
    while(n > 0)
    {
        n--;
        cout<<"enter the val"<<endl;
        cin>>num;
        top -> getdata(num, prv);
        prv = new stack;
        prv = top;
        top = new stack;
    }
    top = prv;
    return top;
}
int isfull(stack * ptr)
{
    if (ptr == NULL)
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}
int isempty(stack * ptr)
{
    if (ptr == NULL)
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}
stack * push(stack * ptr)
{
    int val;
    cout<<"enter the value"<<endl;
    cin>>val;
    stack * top = new stack;
    if (isfull(top) == 0)
    {
        top -> getdata(val, ptr);
        return top;
    }
    else
    {
        cout<<"memory overflow"<<endl;
        return NULL;
    }
}

stack * pop(stack * ptr)
{   
    if (isempty(ptr) == 1)
    {
        cout<<"Underflow"<<endl;
        return NULL;
    }
    stack * top = new stack;
    top = top -> return_next();
    return top;
}
stack * stack_bottom(stack * ptr)
{
    while(ptr -> return_next() != NULL)
        ptr = ptr -> return_next();
    
    return ptr;
} 
void print (stack * top)
{
    while(top -> return_next() != NULL)
    {
        cout<<top -> get_val()<<endl;
        top = top -> return_next();
    }
}
void menu()
{
    cout<<"1. push"<<endl
        <<"2. pop"<<endl
        <<"3. Print Stack top"<<endl
        <<"4. Print Stack bottom"<<endl
        <<"5. exit"<<endl;
}
int main()
{ 
    int choice = 0, n = 0;
    stack * top = NULL;
    stack * ptr = NULL;
    cout<<"enter the number of terms you want in your stack"<<endl;
    cin>>n;
    top = create(n);
    while (choice != -1)
    {
        menu();
        cin>>choice;
        switch(choice)
        {
            case 1:
                top = push(top);
                print(top);
                break;
            case 2:
                top = pop(top);
                print(top);
                break;
            case 3:
                cout<<top -> get_val()<<endl;
                break; 
            case 4:
                ptr = stack_bottom(top);
                cout<<ptr -> get_val()<<endl;
                break;
            case 5:
                choice = -1;
                break;
            default:
                choice = -1;
        }
    }  
    return 0;
}