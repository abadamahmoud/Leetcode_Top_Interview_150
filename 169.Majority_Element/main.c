#include <stdio.h>

int majorityElement(int *nums, int numsSize)
{
     int candidate = 0, count = 0;
     for (int i = 0; i < numsSize; i++)
     {
          if (count == 0)
          {
               candidate = nums[i];
          }
          count += (nums[i] == candidate) ? 1 : -1;
     }
     return candidate;
}

int main()
{
     int nums1[] = {3, 2, 3};
     int nums2[] = {2, 2, 1, 1, 1, 2, 2};

     printf("Majority element in nums1: %d\n", majorityElement(nums1, 3)); // Output: 3
     printf("Majority element in nums2: %d\n", majorityElement(nums2, 7)); // Output: 2
     return 0;
}
