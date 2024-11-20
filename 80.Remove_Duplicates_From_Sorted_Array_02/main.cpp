#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
     int removeDuplicates(vector<int> &nums)
     {
          int k = 0; // Pointer for the next valid position
          for (int num : nums)
          {
               if (k < 2 || num != nums[k - 2])
               {
                    nums[k++] = num;
               }
          }
          return k; // Number of valid elements
     }
};

int main()
{
     Solution solution;
     vector<int> nums = {0, 0, 1, 1, 1, 1, 2, 3, 3};
     int k = solution.removeDuplicates(nums);
     cout << "Unique count: " << k << endl; // Output: 7
     cout << "Modified array: ";
     for (int i = 0; i < k; i++)
     {
          cout << nums[i] << " ";
     }
     cout << endl;
     return 0;
}
