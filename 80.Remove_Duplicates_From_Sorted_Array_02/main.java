public class Solution {
    public int removeDuplicates(int[] nums) {
        int k = 0; // Pointer for the next valid position
        for (int num : nums) {
            if (k < 2 || num != nums[k - 2]) {
                nums[k++] = num;
            }
        }
        return k; // Number of valid elements
    }

    public static void main(String[] args) {
        Solution solution = new Solution();
        int[] nums = {0, 0, 1, 1, 1, 1, 2, 3, 3};
        int k = solution.removeDuplicates(nums);
        System.out.println("Unique count: " + k); // Output: 7
        System.out.print("Modified array: ");
        for (int i = 0; i < k; i++) {
            System.out.print(nums[i] + " ");
        }
    }
}
