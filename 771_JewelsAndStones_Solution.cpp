class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int a = J.length(), b = S.length();
	    int x = 0;
	    for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                if (J[i] == S[j]) x++;
            }
        }
        return x;
    }
};