#include <iostream>
using namespace std;

int primenum(int n)
{
    int num = 2;
    while (num <= n)
    {
        bool isprime = true;
        for (int i = 2; i <= num / 2; i++)
        {

            if (num % i == 0)
            {
                isprime = false;
                break;
            }
        }
        if (isprime)
        {
            cout << num << endl;
        }
        num++;
    }
    return 0;
}
int main()
{
    primenum(20);
}
