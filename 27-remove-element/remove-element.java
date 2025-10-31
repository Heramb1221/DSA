class Solution {
    public int removeElement(int[] nums, int val) {

        int c = 0;

        for(int i = 0; i < nums.length; i++) {
            if(nums[i] == val) {
                nums[i] = Integer.MAX_VALUE;
            } else {
                c++;
            }
        }

        Arrays.sort(nums);
        return c;
        
    }
}