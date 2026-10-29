#include <iostream>
using namespace std;

int main()
{
    int nums[] = {10, 5, 1, -13, 8};
    int smallest = INT_MAX, index;
    for (int i = 0; i < 5; i++)
    {
        if (nums[i] < smallest)
        {
            smallest = nums[i];
            index = i; 
        }
    }
    cout << smallest << endl;
    cout << index;
    return 0;
}