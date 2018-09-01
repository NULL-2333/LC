class Solution {
public:
    string toLowerCase(string str) {
        int a = str.length();
        for(int i = 0;i < a;i++){
            if(str[i] <= 'Z' && str[i] >= 'A'){
                str[i] += 32;
            }
        }
        return str;
    }
};