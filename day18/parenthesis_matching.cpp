#include <iostream>

using namespace std;

class node
{
    char val;
    node * next;
    public:
        node()
        {
            val = 0; 
            next = NULL;
        }
        char val_()
        {
            return val;
        }
        node * next_()
        {
            return next;
        }
        void getdata(char val, node * next)
        {
            this -> val = val;
            this -> next = next;
        }
};
int isempty(node * ptr)
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
node * push(node * ptr, char ch)
{
    node * top;
    top -> getdata(ch, ptr);
    return top;
}
node * pop(node * top)
{
    if (isempty(top) == 1)
    {
        cout<<"Underflow"<<endl;
        return NULL;
    }
    top = top -> next_();
    return(top);
}

int check(node * top)
{
    while (top ->val_() != ')')
    {
        top = pop(top);
    }
    int count = 0;
    node * ptr = top;
    while (ptr ->val_() != '(' && ptr != NULL)
    {
        ptr = ptr ->next_();
        count++;
    }
}
int main()
{
    string exp;
    int i = 0;
    node * top = NULL;
    cout<<"Enter the expression"<<endl;
    cin>>exp; 
    while (exp[i] != '\0')
    {
        i++;
        top = push(top, exp[i]);
    }
    int flag = check(top);
    return 0;
}