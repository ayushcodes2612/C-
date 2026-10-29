#include <iostream>
using namespace std;

int rev(int n)
{
    int rev=0;
    while(n>0)
    {
        int digit=n%10;
        rev =rev*10+digit;
        n /= 10;
    }
    return rev;
}
int main ()
{
    cout<<rev(142);
    return 0;
}