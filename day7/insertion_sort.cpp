#include <iostream>
 
using namespace std;

void print_array(int arr[], int n)
{
    cout << "The sorted array using bubble sort is :-";

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void selectionsort(int[], int);

int main(void)
{
    int n = 0;
    cout << "Enter the no of elements in the array " << endl;
    cin >> n;

    int arr[n];
    cout << "Enter the array " << endl;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    selectionsort(arr, n);
    print_array(arr, n);
    return 0;
}

void selectionsort(int arr[], int n) 
{
    int temp = 0, j = 0;
    for (int i = 1; i < n; i++)
    {
        temp = arr[i];
        j = i - 1;
        while (arr[j] > temp && j >=0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
}