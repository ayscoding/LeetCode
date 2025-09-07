class Solution {
    // Ayscoding
    public boolean isPalindrome(int x) {

        String y = String.valueOf(x);
        String r = "";

        for (int i = y.length()-1; i >= 0; i--){

            char m = y.charAt(i);
            r = r + m;
        }

        return y.equals(r);
    }
    
}
