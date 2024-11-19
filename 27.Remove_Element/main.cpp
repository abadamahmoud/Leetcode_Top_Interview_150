#include <iostream>
#include <vector>
#include <algorithm>

class Solution
{
public:
     int removeElement(std::vector<int> &nums, int val)
     {
          int k = 0;
          for (int num : nums)
          {
               if (num != val)
               {
                    nums[k++] = num;
               }
          }
          return k;
     }
};

int main()
{
     std::vector<int> nums = {0, 1, 2, 2, 3, 0, 4, 2};
     int val = 2;
     Solution solution;
     int k = solution.removeElement(nums, val);

     std::cout << "k = " << k << "\nModified nums = ";
     for (int i = 0; i < k; i++)
     {
          std::cout << nums[i] << " ";
     }
     return 0;
}
