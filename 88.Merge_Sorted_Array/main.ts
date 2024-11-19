function merge(nums1: number[], m: number, nums2: number[], n: number): void {
     let i = m - 1; // Index for nums1 (actual elements)
     let j = n - 1; // Index for nums2
     let k = m + n - 1; // Index for the merged array
 
     // Start from the end and fill nums1
     while (i >= 0 && j >= 0) {
         if (nums1[i] > nums2[j]) {
             nums1[k--] = nums1[i--];
         } else {
             nums1[k--] = nums2[j--];
         }
     }
 
     // Copy remaining elements of nums2 if any
     while (j >= 0) {
         nums1[k--] = nums2[j--];
     }
 }
 
 // Example usage
 const nums1 = [1, 2, 3, 0, 0, 0];
 const m = 3;
 const nums2 = [2, 5, 6];
 const n = 3;
 
 merge(nums1, m, nums2, n);
 console.log(nums1);
 