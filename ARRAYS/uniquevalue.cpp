#include <iostream>
using namespace std;

int unique(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        bool uniq = true;
        for (int m = 0; m < size; m++)
        {
            if ((arr[i] == arr[m]) && (m != i))
            {
                uniq = false;
            }
        }
        if (uniq == true)
        {
            cout << arr[i] << endl;
        }
    }
    return 0;
}
int main()
{
    int size = 14;
    int arr[] = {3, 6, 2, 3, 8, 7, 89, 23, 5, 32, 5, 7, 8, 89};
    unique(arr, size);
    return 0;
}
