public class LinearSearch {
public static void main(String[] args) {
        int[] nums = {23,  45, 1, 2, 8, 19, -3, 16, -11, 28};
        int target = 19;
        int ans = search(nums, target);
        System.out.println(ans);
    }

    //search the target and return true or false
    static boolean search3(int[] arr, int target) {
        if(arr.length == 0) {
            return false;
        }

        //run a for loop
        for(int element : arr) {
            if(element == target) {
                return true;
            }
        }

        return false;
    }

    //search the target and return element
    static int search2(int[] arr, int target) {
        if(arr.length == 0) {
            return -1;
        }

        //run a for loop
        for(int element : arr) {
            if(element == target) {
                return element;
            }
        }

        return Integer.MAX_VALUE;
    }

    //search in array and return the index if item found
    static int search(int[] arr, int target) {
        if(arr.length == 0) {
            return -1;
        }

        for(int i = 0; i < arr.length; i++) {
            int element = arr[i];
            if(element == target) {
                return i;
            }
        }

        return -1;
    }

}

