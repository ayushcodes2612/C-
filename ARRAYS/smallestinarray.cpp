#include <iostream>
using namespace std;

int main()
{
    int nums[] = {10, 5, 13, -13, 8};
    int smallest = INT_MIN;
    for (int i = 0; i < 5; i++)
    {
        if (nums[i] > smallest)
        {
            smallest = nums[i];
        }
    }
    cout << smallest << endl;
    return 0;
}