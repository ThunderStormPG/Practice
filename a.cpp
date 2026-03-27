class Solution {
    public String longestCommonPrefix(String[] strs) {
        if (strs == null || strs.length == 0) return "";
        
        String prefix = strs[0];
        
        for (int i = 1; i < strs.length; i++) {
            prefix = findPrefix(prefix, strs[i]);
            
            if (prefix.isEmpty()) break;
        }
        
        return prefix;
    }

    private String findPrefix(String s1, String s2) {
        int length = Math.min(s1.length(), s2.length());
        int i = 0;
        
        while (i < length && s1.charAt(i) == s2.charAt(i)) {
            i++;
        }
        
        return s1.substring(0, i);
    }
}
