#include <iostream>

using namespace std;

void bubblesort(int[], int);
int main(void)
{
    int n = 0;
    cout << "Enter the no of elements in the array " << endl;
    cin >> n;

    int arr[n];
    cout << "Enter the array " << endl;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    bubblesort(arr, n);

    return 0;
}

void bubblesort(int arr[], int n)
{
    int num = 0, flag = 1;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                num = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = num;
                flag = 0;
            }
        }
    }

    cout << "The sorted array using bubble sort is :-";

    for (int i = 0; i < n; i++)
        cout << arr[i] <<" ";
    cout << endl;
}