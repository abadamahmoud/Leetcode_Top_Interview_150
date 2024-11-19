#include <stdio.h>

void merge(int *nums1, int nums1Size, int m, int *nums2, int nums2Size, int n)
{
     int i = m - 1;     // Index for nums1 (actual elements)
     int j = n - 1;     // Index for nums2
     int k = m + n - 1; // Index for the merged array

     // Start from the end and fill nums1
     while (i >= 0 && j >= 0)
     {
          if (nums1[i] > nums2[j])
          {
               nums1[k--] = nums1[i--];
          }
          else
          {
               nums1[k--] = nums2[j--];
          }
     }

     // Copy remaining elements of nums2 if any
     while (j >= 0)
     {
          nums1[k--] = nums2[j--];
     }
}

int main()
{
     int nums1[6] = {1, 2, 3, 0, 0, 0};
     int nums2[3] = {2, 5, 6};
     int m = 3, n = 3;

     merge(nums1, 6, m, nums2, 3, n);

     printf("Merged array: ");
     for (int i = 0; i < m + n; i++)
     {
          printf("%d ", nums1[i]);
     }
     return 0;
}