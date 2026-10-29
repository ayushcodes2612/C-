#include <iostream>
using namespace std;

int fibo(int n)
{
        
        int sum = 0,num=1;
        for (int i = 0; i < n; i++)
        {
            int m;
            cout<<sum<<endl;
            m=sum+num;
            sum=num;
            num=m;
        }
    return sum; 
}
int main()
{

   fibo(10);
    return 0;
}