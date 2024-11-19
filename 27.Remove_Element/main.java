import java.util.Arrays;

public class Main {
    public static void main(String[] args) {
        int[] nums = {0, 1, 2, 2, 3, 0, 4, 2};
        int val = 2;
        Solution solution = new Solution();
        int k = solution.removeElement(nums, val);

        System.out.println("k = " + k);
        System.out.println("Modified nums = " + Arrays.toString(Arrays.copyOf(nums, k)));
    }
}

class Solution {
    public int removeElement(int[] nums, int val) {
        int k = 0;
        for (int num : nums) {
            if (num != val) {
                nums[k++] = num;
            }
        }
        return k;
    }
}
