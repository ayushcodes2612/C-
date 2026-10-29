#include <iostream>
using namespace std;

int btod(int binnum)
{
    int ans=0;
    int pow=1;
    while(binnum>0)
    {
        int rem=binnum%2;
        ans +=(pow*rem);
        pow *=2;
        binnum /=10;
    }
    return ans;
}
int main ()
{
    
    cout<<btod(101010);
    return 0;
}