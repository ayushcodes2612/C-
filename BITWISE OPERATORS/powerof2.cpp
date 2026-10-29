#include <iostream>
using namespace std;
bool power(int n)
{
    if (n <= 0)

        return false;
    if ((n & (n - 1)) == 0)
        return true;

    return false;
}
int main()
{
    cout << power(32);
    return 0;
}