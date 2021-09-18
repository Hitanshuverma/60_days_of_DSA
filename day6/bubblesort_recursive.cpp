#include <iostream>

using namespace std;

void bubblesort_recursive(int[], int);
void print_array(int arr[], int n)
{
    cout << "The sorted array using bubble sort is :-";

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

    bubblesort_recursive(arr, n);
    print_array(arr, n);
    return 0;
}

void bubblesort_recursive(int arr[], int n)
{
    int num = 0;
    if(n == 1)
        return;

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            num = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = num;
        }
    }
    bubblesort_recursive(arr, n - 1);
}