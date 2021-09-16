#include <bits/stdc++.h>

using namespace std;

int binary_search(int *, int, int, int *);
int main(void)
{
    int n = 0, key = 0;
    cout << "Enter the number of elements to be entered" << endl;
    cin >> n;
    cout << "Enter the array " << endl;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter the number to search" << endl;
    cin >> key;
    sort(arr, arr + n);
    int pos = 0;
    int *p = &arr[0];
    int *low = &arr[0];
    if (arr[n - 1] >= key && key >= arr[0]) 
        pos = binary_search(p, n, key, low);
    
    else 
        pos = -1;

    if (pos == -1)
    {
        cout << "No is not in the array" << endl;
        return 0;
    }
    cout << "The no is at " << pos + 1 << " positon" << endl;
    return 0;
}
int binary_search(int *p, int n, int key, int *low)
{
    if (*(p + n / 2) < key)
    {
        p += n / 2; 
        if (n % 2 == 0)
            n = n / 2;
        else
        n = n / 2 + 1;
        return binary_search(p, n, key, low);
    }
    else if (*(p + n / 2) > key)
    {
        n = n / 2;
        return binary_search(p, n, key, low);
    }
    else if (*(p + n / 2) == key)
    {
        return (p - low + 1);
    }
    return 99;
}