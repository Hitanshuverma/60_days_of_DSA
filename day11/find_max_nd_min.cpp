#include <iostream>

using namespace std;

int max(int[], int, int);
int min(int[], int, int);
int main(void)
{
    int n = 0;
    cout << "enter the number of terms you want to enter" << endl;
    cin >> n;
    int arr[n];
    cout << "enter the array " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int mx = max(arr, 0, n);
    // int mn = min(arr, 0, n);

    cout<<mx;
    return 0;
}
int max(int arr[], int low, int high)
{
    int mid = (low + high) / 2;
    int left = 0;
    int right = 0;
    if (low == mid)
    {
        left = arr[low];
        right = arr[high];
        if (left > right)
        {
            return left;
        }
        else
        {
            return right;
        }
    }
    else
    {
        left = max(arr, low, mid);
        right = max(arr, mid + 1, high);
        if (left > right)
        {
            return left;
        }
        else
        {
            return right;
        }
    }
}
// int min(int arr[], int n)
// {
// }