#include <iostream>
using namespace std;

int pal(int n)
{
    int temp=0;
    int og=n;
   while(n>0)
    
    {
        
        int num=n%10;
        temp=temp*10+num;
        n=n/10;
    }
    if(temp==og){
        cout<<temp<<" is Palindrome"<<endl;
    }
    else{
        cout<<temp<<" is Not Palindrome"<<endl;
    }
    return 0;

}
int main()
{
    pal(1341);
    return 0;
}