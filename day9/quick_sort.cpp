#include <bits/stdc++.h>
 
using namespace std;

void quick_sort(int [], int ,int);

void print_array(int arr[], int n)
{
    cout << "The sorted array using quick sort sort is :-";

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main(void)
{
    int n = 0;
    cout << "Enter the no of elements in the array " << endl;
    cin >> n;

    int arr[n];
    cout << "Enter the array " << endl;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    quick_sort(arr, 0, n - 1);
    print_array(arr, n);
    return 0;
}
void quick_sort(int arr[], int low, int high)
{
    if (low >= high)
        return;

//partioning code
    int pivot = low;
    int i = low + 1;
    int j = high;

    do
    {
        while (arr[i] <= arr[pivot])
            i++;
        while (arr[j] > arr[pivot])
            j--;
        
        if(i < j)
        {
            swap(arr[i], arr[j]);
        }
    }while (i <= j);

    swap(arr[low], arr[j]);
    quick_sort(arr, low, pivot - 1);
    quick_sort(arr, pivot + 1, high);
    return;
}