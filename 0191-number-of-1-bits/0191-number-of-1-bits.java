public class Solution {
    // you need to treat n as an unsigned value
    public int hammingWeight(int n) {
        int counter = 0;
        
        while (n != 0) {
            counter += n & 1; // Add the least significant bit to the counter
            n >>>= 1; // Right shift n by 1 bit
        }
        
        return counter;
    }
}
