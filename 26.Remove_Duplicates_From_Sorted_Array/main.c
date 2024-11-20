#include <stdio.h>

int removeDuplicates(int *nums, int numsSize)
{
     int k = 0; // Index for the next unique element
     for (int i = 1; i < numsSize; i++)
     {
          if (nums[i] != nums[k])
          {
               k++;
               nums[k] = nums[i];
          }
     }
     return k + 1; // Return the count of unique elements
}

int main()
{
     int nums[] = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
     int numsSize = sizeof(nums) / sizeof(nums[0]);
     int k = removeDuplicates(nums, numsSize);
     printf("Unique count: %d\n", k); // Output: 5
     printf("Modified array: ");
     for (int i = 0; i < k; i++)
     {
          printf("%d ", nums[i]);
     }
     printf("\n");
     return 0;
}
