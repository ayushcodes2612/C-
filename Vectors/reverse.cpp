#include <iostream>
#include <vector>
using namespace std;

int reverse(vector<int>& rev)
{
    for(int i=0;i<rev.size()/2;i++)
    {
        swap(rev[i],rev[rev.size()-1-i]);
    }
    return 0;
}
int main ()
{
    vector<int> rev ={1,2,3,4,5,6,7,8};
    int size=rev.size();
    reverse(rev);
   
     for(int i=0;i<size;i++)
     {
        cout<<rev[i]<<endl;
     }
    return 0;
}