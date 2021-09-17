#include <bits/stdc++.h>
 
using namespace std;

void selection_sort(int [], int );

int main(void)
{
    int n = 0;
    cout<<"Enter the no of elements in the array "<<endl;
    cin>>n;

    int arr[n];
    cout<<"Enter the array "<<endl;
    for (int i = 0; i < n; i++)
        cin>>arr[i];

    selection_sort(arr, n);

    return 0;
}

void selection_sort(int arr[], int n)
{
    int min_indx = 0;

    for (int i = 0; i < n - 1; i++)
    {
        min_indx = i;
        for(int j = i + 1; j < n; j++)
        {
            if(arr[min_indx] > arr[j])
                min_indx = j;
        }
        
        swap(arr[i], arr[min_indx]);
    }

    cout<<"The sorted array using selection sort is :- ";

    for (int i = 0; i < n; i++)
        cout<<arr[i];
    cout<<endl;
}