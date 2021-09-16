#include <iostream>
 
using namespace std;

int liner_search(int *, int , int);
int main(void)
{
    int n = 0, key = 0;
    cout<<"Enter the number of elements to be entered"<<endl;
    cin>>n;
    cout<<"Enter the array "<<endl;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin>>arr[i];

    cout<<"Enter the number to search"<<endl;
    cin>>key;
    int *p = &arr[0];
    int pos = liner_search(p, n, key);
    if (pos == -1)
    {
        cout<<"No is not in the array"<<endl;
        return 0;
    }
    cout<<"The no is at "<<pos + 1<<" positon"<<endl;
    return 0;
}
int liner_search(int *p, int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if(*p == key)
            return i;
        p++;
    }
    return -1;
}