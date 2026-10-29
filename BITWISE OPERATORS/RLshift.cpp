#include <iostream>
using namespace std;

int operators(int a,int b)
{
    
    cout<<(a<<b)<<endl;
    cout<<(a>>b)<<endl;
    return 0;
}
int main ()
{
    operators(4,8);
    return 0;
}