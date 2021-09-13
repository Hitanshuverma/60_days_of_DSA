#include <iostream>
 
using namespace std;
void rev(long int );
int main(void)
{
    int t = 0;
    cin>>t;
    while(t != 0)
    {
        t--;
        long int n = 0;
        cin>>n;
        rev(n);
    }
    return 0;
}
void rev(long int n)
{
    int rev = 0;
    while (n > 0)
    {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    cout<<rev<<endl;
}