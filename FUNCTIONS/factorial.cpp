#include <iostream>
using namespace std;

int  fact(int n)
{
    int num=1;
    for(int i=1;i<=n;i++)
    {
        num=num*i;
    }
    return num;
}
int  main()
    {
        
        cout<<fact(5);
        cout<<fact(15);
    }
