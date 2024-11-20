#include <iostream>
#include <vector>
using namespace std;

void reverse(vector<int> &nums, int start, int end)
{
     while (start < end)
     {
          swap(nums[start], nums[end]);
          start++;
          end--;
     }
}

void rotate(vector<int> &nums, int k)
{
     int n = nums.size();
     k %= n; // Handle cases where k >= n

     reverse(nums, 0, n - 1); // Step 1: Reverse the entire array
     reverse(nums, 0, k - 1); // Step 2: Reverse the first k elements
     reverse(nums, k, n - 1); // Step 3: Reverse the rest
}

int main()
{
     vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
     rotate(nums, 3);
     for (int num : nums)
     {
          cout << num << " ";
     }
     // Output: 5 6 7 1 2 3 4
     return 0;
}
