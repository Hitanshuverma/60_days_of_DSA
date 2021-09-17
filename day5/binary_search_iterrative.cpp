#include <iostream>
 
using namespace std;

int binary_search(int [], int ,int);
int main(void)
{
    int n, key = 0, pos;
    cout<<"Enter the no of elements in the array "<<endl;
    cin>>n;

    int arr[n];
    cout<<"Enter the array "<<endl;
    for (int i = 0; i < n; i++)
        cin>>arr[i];

    cout<<"Enter the number to search "<<endl;
    cin>>key;

    pos = binary_search(arr, n, key);

   if (pos == -1)
    {
        cout << "No is not in the array" << endl;
        return 0;
    }
    cout << "The no is at " << pos<< " positon" << endl;
    return 0;
}

int binary_search(int arr[], int n, int key)
{
    int low, high, mid, pos = -1;
    low = 0;
    high = n - 1;

    while (low <= high)
    {
        mid = (high + low) / 2;
        if (mid < key)
        {
            low = mid + 1;
        }
        else if (mid > key)
        {
            high = mid - 1;
        }
        else
        {
            pos = mid;
            break;
        }
    }
    return pos;
}