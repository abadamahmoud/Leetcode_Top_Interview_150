#include <stdio.h>

int removeDuplicates(int *nums, int numsSize)
{
     int k = 0; // Pointer for the next valid position
     for (int i = 0; i < numsSize; i++)
     {
          if (k < 2 || nums[i] != nums[k - 2])
          {
               nums[k++] = nums[i];
          }
     }
     return k; // Number of valid elements
}

int main()
{
     int nums[] = {0, 0, 1, 1, 1, 1, 2, 3, 3};
     int numsSize = sizeof(nums) / sizeof(nums[0]);
     int k = removeDuplicates(nums, numsSize);
     printf("Unique count: %d\n", k); // Output: 7
     printf("Modified array: ");
     for (int i = 0; i < k; i++)
     {
          printf("%d ", nums[i]);
     }
     printf("\n");
     return 0;
}
