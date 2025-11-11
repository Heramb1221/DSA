class Solution {
    public int findClosest(int x, int y, int z) {
       int disX = Math.abs(z - x);
        int disY = Math.abs(z - y);
        if (disX == disY) return 0;
        if (disX < disY) return 1;
        return 2;
    }
}