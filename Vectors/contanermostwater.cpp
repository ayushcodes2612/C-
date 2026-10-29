#include <iostream>
#include <vector>

using namespace std;

    int maxArea(vector<int>& height) {
        int n = height.size();
        int maxwt = 0;
        int area = 0;
        int i = 0, j = n - 1;
        while (i < j) {
            int wid = j - i;
            int ht = min(height[i], height[j]);
           area = wid * ht;
            maxwt = max(maxwt, area);
            if (height[i] < height[j])
                i++;
            else
                j++;
        }
        return maxwt;
    }
int main()
{
    vector <int> height =  {1,8,6,2,5,4,8,3,7};
    maxArea(height);
    return 0;
}