#include <iostream>
using namespace std;

int reversearray(int arr[], int size)
{
    int start = 0, end = size - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    return 0;
}
int main()
{
        int size = 6;
    int arr[] = {2, 5, 6, 1, 9,3};
    cout << "Before Swap" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
    }
    cout << endl;

    reversearray(arr, size);

    cout << "After Swap" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
    }
    return 0;
}