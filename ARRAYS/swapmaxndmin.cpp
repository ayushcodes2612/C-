#include <iostream>
using namespace std;

int maxmin(int arr[], int size)
{
    int largest = INT_MIN, index = 0;
    int smallest = INT_MAX, Index = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
            index = i;
        }
        if (arr[i] < smallest)
        {
            smallest = arr[i];
            Index = i;
        }
    }
    swap(arr[index], arr[Index]);
    return 0;
}

int main()
{
    int arr[] = {5, 19, 7, 9, 1, 54, 3, 7, -10, 5, 8, 4};
    int size = 12;
    cout << "Before swap" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    maxmin(arr, size);
    cout << "After swap" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}