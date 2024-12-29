//Given an array, ceiling = smalllest number in an array that is smallest element in array greater or equal to target element.
//Time complexity is O(logn)
class CeilingofNumber {
    public static void main(String[] args) {
        int[] arr = {-18, -12, -4, 0, 2, 3, 4, 15, 16, 22, 45, 89};
        int target = 21;

        int ans = ceiling(arr, target);
        System.out.println(ans);
    }

    static int ceiling(int[] arr, int target) {
        //if target is greater than greatest element in array
        if(target > arr[arr.length - 1]) {
            return -1;
        }
        int start = 0;
        int end = arr.length -1;

        while(start <= end) {
            int mid = start + (end-start)/2;

            if(target < arr[mid]) {
                end = mid -1;
            } else if(target > arr[mid]) {
                start = mid + 1;
            } else {
                return mid;
            }
        }

        return arr[start];
    }
}