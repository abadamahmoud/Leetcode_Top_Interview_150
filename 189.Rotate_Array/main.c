#include <stdio.h>

void reverse(int *nums, int start, int end)
{
     while (start < end)
     {
          int temp = nums[start];
          nums[start] = nums[end];
          nums[end] = temp;
          start++;
          end--;
     }
}

void rotate(int *nums, int numsSize, int k)
{
     k %= numsSize; // Handle cases where k >= numsSize

     reverse(nums, 0, numsSize - 1); // Step 1: Reverse the entire array
     reverse(nums, 0, k - 1);        // Step 2: Reverse the first k elements
     reverse(nums, k, numsSize - 1); // Step 3: Reverse the rest
}

int main()
{
     int nums[] = {1, 2, 3, 4, 5, 6, 7};
     int numsSize = sizeof(nums) / sizeof(nums[0]);
     rotate(nums, numsSize, 3);

     for (int i = 0; i < numsSize; i++)
     {
          printf("%d ", nums[i]);
     }
     // Output: 5 6 7 1 2 3 4
     return 0;
}
