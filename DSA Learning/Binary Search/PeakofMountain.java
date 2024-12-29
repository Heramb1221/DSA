public class PeakofMountain {
    public static void main(String[] args) {
        int[] arr = {1, 2, 3, 5, 6, 4, 3, 2};

        int peak = findPeak(arr);

        System.out.println(peak);
    }

    static int findPeak(int[] arr) {
        int start = 0;
        int end = arr.length - 1;

        while(start < end) {
            int mid = start + (end - start) / 2;

            if(arr[mid] > arr[mid+1]) {
                //In the decending part of array, this may be the ans, but look left, therefore end != mid -1
                end = mid;
            } else {
                //In the ascending part of array
                start = mid + 1;
            }
        }

        // in the end, start == end and pointing to the largest number because of the 2 checks above

        return start;
    }
}
