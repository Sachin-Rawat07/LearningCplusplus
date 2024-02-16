#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long long largestPerimeter(vector<int> &nums)
{

    sort(nums.begin(), nums.end());
    long long peri = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        peri += nums[i];
    }
    for (int j = nums.size() - 1; j >= 2; j--)
    {
        peri -= nums[j];
        if (peri > nums[j])
        {
            peri = peri + nums[j];
            return peri;
        }
    }

    return -1;
}

int main()
{
    vector<int>nums={1,1,2,3,5,12,50};
    cout<<largestPerimeter(nums)<<endl;

    return 0;
}