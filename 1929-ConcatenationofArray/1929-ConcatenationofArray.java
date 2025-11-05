// Last updated: 11/5/2025, 8:27:32 PM
class Solution {
    public int[] getConcatenation(int[] nums) {
        int ans[] = new int[2*nums.length];

        for(int i = 0; i < nums.length; i++) {
            ans[i] = nums[i];
            ans[i+nums.length] = nums[i];
        }

        return ans;
    }
}