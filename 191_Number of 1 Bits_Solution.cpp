class Solution {
public:
    string bitCode(uint32_t x){
        string s = "";
        while(x / 2 != 0){
            s = to_string(x % 2) + s;
            x = x / 2;
        }
        s = to_string(x) + s;
        return s;
    }
    int hammingWeight(uint32_t n) {
        string s = bitCode(n);
        int x = 0;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '1')
                x++;
        }
        return x;
    }
};