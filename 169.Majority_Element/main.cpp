#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
     int majorityElement(vector<int> &nums)
     {
          int candidate = 0, count = 0;
          for (int num : nums)
          {
               if (count == 0)
               {
                    candidate = num;
               }
               count += (num == candidate) ? 1 : -1;
          }
          return candidate;
     }
};

int main()
{
     Solution solution;
     vector<int> nums1 = {3, 2, 3};
     vector<int> nums2 = {2, 2, 1, 1, 1, 2, 2};

     cout << "Majority element in nums1: " << solution.majorityElement(nums1) << endl; // Output: 3
     cout << "Majority element in nums2: " << solution.majorityElement(nums2) << endl; // Output: 2
     return 0;
}
