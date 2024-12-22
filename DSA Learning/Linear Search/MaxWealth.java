public class MaxWealth {
    public static void main(String[] args) {
        
    }

    public int maxwealth(int[][] accounts) {
        //person = row
        //account = col
        int ans = Integer.MIN_VALUE;
        for(int[] ints : accounts) {
            //when you start a new row, take a new sum for that row
            int sum = 0;

            for(int anInt : ints) {
                sum += anInt;
            }

            if(sum > ans) {
                ans = sum;
            }
        }

        return ans;
    }
}
