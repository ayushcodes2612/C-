#include <iostream>
using namespace std;

int dectobin(int decnum)
{
    int ans=0;
    int pow=1;
    
    while(decnum>0)
    {
       int rem=decnum%2;
       decnum /=2;
       ans += (pow*rem);
       pow = pow*10;
    }
    return ans;
}
int main ()
{
      cout<<dectobin(50);
    return 0;
}