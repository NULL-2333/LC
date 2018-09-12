class Solution {
public:
    string bitCode(int x){
        string s = "";
        while(x / 2 != 0){
            s = to_string(x % 2) + s;
            x = x / 2;
        }
        s = to_string(x) + s;
        return s;
    }
    int conv(string s1, string s2){
        int a = s1.length();
        int b = s2.length();
        int len = max(a, b);
        int x = 0;
        if(a < len){
            for(int i = 0; i < len - a; i++)
                s1 = "0" + s1;
        }
        if(b < len){
            for(int i = 0; i < len - b; i++)
                s2 = "0" + s2;
        }
        for(int i = 0; i < len; i++){
            if(s1[i] != s2[i])
                x++;
        }
        return x;
    }
    int hammingDistance(int x, int y) {
        string s[2];
        s[0] = bitCode(x);
        s[1] = bitCode(y);
        return conv(s[0], s[1]);
    }
};