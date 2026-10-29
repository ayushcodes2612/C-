#include <iostream>
using namespace std;

int fact(int n)
{
    int factorial=1;
    for(int i=1;i<=n;i++)
    {
        factorial=factorial*i;
    }
    return factorial;
}
int ncr(int n,int r)
{
    
    return fact(n)/(fact(r)*fact(n-r));
}
int main ()
{
    int n=6,r=3;
    cout<<ncr(n,r);
}