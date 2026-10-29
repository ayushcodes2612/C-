#include <iostream>
using namespace std;

int isprime(int m)
{
    bool prime = true;
    for (int i = 2; i <= m / 2; i++)
    {
        if (m % i == 0)
        {
            prime = false;
            break;
        }
    }
    return prime;
}
int main()
{
    int m=23;
    if (isprime(m))
    {
        cout << m << " is a prime number." << endl;
    }
    else
    {
        cout << m << " is not a prime number." << endl;
    }
    return 0;
}