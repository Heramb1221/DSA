class ArraySortedandRotated {

    public static void main(String args[]) {
        int[] a = {10, 1, 1, 10};
        ArraySortedandRotated ap = new ArraySortedandRotated();

        System.out.println(ap.check(a));
    }

    public boolean check(int[] nums) {
        int i = rotationIndex(nums);
        if(i < 0) {
            i = 0;
        }
        int[] b = new int[nums.length];
        for(int j = 0; j < nums.length -1; j++) {
            b[j] = nums[(j+i)%nums.length];
        }

        for(int j = 0; j < b.length - 2; j++) {
            if(b[j+1] - b[j] <= 0) {
                return false;
            }
        }

        return true;
    }

    public int rotationIndex(int[] nums) {
        int start = 0;
        int end = nums.length - 1;
        while(start <= end) {
            int mid = start + (end - start) / 2;

            if(mid < end && nums[mid] > nums[mid + 1]) {
                return mid + 1;
            }
            if(mid > start && nums[mid] < nums[mid - 1]) {
                return mid - 1;
            }
            if(nums[mid] <= nums[start]) {
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }
        return -1;

    }

}