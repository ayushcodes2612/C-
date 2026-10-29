#include <iostream>
using namespace std;

int common(int A1[], int A2[], int size1, int size2)
{
    for (int i = 0; i < size1; i++)
    {
        for (int m = 0; m < size2; m++)
        {
            if (A1[i] == A2[m])
            {
                cout << A1[i] << endl;
            }
        }
    }
    return 0;
}
int main()
{
    int A1[] = {3, 6, 8, 1, 5};
    int A2[] = {5, 7, 6, 2, 4};
    int size1 = 5, size2 = 5;
    common(A1, A2, size1, size2);
    return 0;
}