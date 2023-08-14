#include <bits/stdc++.h>
using namespace std;

int pivot(vector<int> &nums, int s, int e)
{
    while (s < e)
    {
        int mid = (s + e) / 2;
        if (nums[mid] >= nums[0])
        {
            s = mid - 1;
        }
        else
        {
            e = mid;
        }
    }
    return s;
}

int binarySearch(vector<int> nums, int s, int e, int target)
{
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (nums[mid] == target)
        {
            return mid;
        }
        else if (nums[mid] > target)
        {
            e = mid - 1;
        }
        else if (nums[mid] < target)
        {
            s = mid + 1;
        }
    }
    return -1;
}

int search(vector<int> &nums, int target)
{
    int s = 0;
    int n = nums.size();
    int e = n - 1;

    int Pivot = pivot(nums, s, e);
    if (nums[Pivot] <= target && target <= nums[n - 1])
    {
        return binarySearch(nums, Pivot, e, target);
    }
    else
    {
        return binarySearch(nums, s, Pivot - 1, target);
    }
}

int main()
{
    vector<int> nums = {3, 4, 5, 1, 2};

    cout << search(nums, 3);

    return 0;
}