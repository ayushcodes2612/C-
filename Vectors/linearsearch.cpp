#include <iostream>
#include <vector>
using namespace std;

int linearsearch(vector<int> lin, int target)
{
    for (int val : lin)
    {
        if (val == target)
        {
            cout << "FOUND" << endl;
            return 0;
        }
    }
    cout << "NOT FOUND" << endl;
    return 0;
}
int main()
{
    vector<int> lin = {4, 7, 2, 9, 3, 6};
    int target = 9;
    linearsearch(lin, target);
    return 0;
}