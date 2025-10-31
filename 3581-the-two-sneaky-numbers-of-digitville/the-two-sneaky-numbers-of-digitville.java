class Solution {
    public int[] getSneakyNumbers(int[] nums) {

        ArrayList<Integer> a = new ArrayList<Integer>();

        Arrays.sort(nums);
        for(int i = 0; i < nums.length - 1; i++) {
            if(nums[i] == nums[i+1]) {
                a.add(nums[i]);
            }
        }

        int[] intArray = new int[a.size()];
        for (int i = 0; i < a.size(); i++) {
            intArray[i] = a.get(i);
        }

        return intArray;
    }
}