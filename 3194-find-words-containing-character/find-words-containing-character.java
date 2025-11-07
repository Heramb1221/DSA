class Solution {
    public List<Integer> findWordsContaining(String[] words, char x) {

        List<Integer> r = new ArrayList<>();
        for(int i = 0; i < words.length; i++) {
            for(char ch : words[i].toCharArray()) {
                if(ch == x) {
                    r.add(i);
                    break;
                }
            }
        }

        return r;
        
    }
}