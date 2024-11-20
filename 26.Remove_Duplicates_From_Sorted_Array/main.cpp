#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
     int removeDuplicates(vector<int> &nums)
     {
          int k = 0; // Index for the next unique element
          for (int i = 1; i < nums.size(); i++)
          {
               if (nums[i] != nums[k])
               {
                    k++;
                    nums[k] = nums[i];
               }
          }
          return k + 1; // Return the count of unique elements
     }
};

int main()
{
     Solution solution;
     vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
     int k = solution.removeDuplicates(nums);
     cout << "Unique count: " << k << endl; // Output: 5
     cout << "Modified array: ";
     for (int i = 0; i < k; i++)
     {
          cout << nums[i] << " ";
     }
     cout << endl;
     return 0;
}
