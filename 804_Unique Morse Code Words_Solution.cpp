class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        int x = 0;
        string m[] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        vector<string> mW(words.size());
        for(int i = 0; i < words.size(); i++)
            mW[i] = "";
        for(int i = 0; i < words.size(); i++){
            for(int j = 0; j < words[i].length(); j++){
                mW[i] += m[words[i][j] - 'a'];
            }
        }
        set<string> st;
        for(int i = 0; i < words.size(); i++){
            st.insert(mW[i]);
        }
        x = st.size();
        return x;
    }
};