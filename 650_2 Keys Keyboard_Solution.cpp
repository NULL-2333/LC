class Solution {
public:
    int minSteps(int n) {
        if(n == 1)
            return 0;
        int x = n;
        for(int i = n - 1; i > 1; i--){
            if(n % i == 0)
                x = min(x, minSteps(n / i) + i);
        }
        return x;
    }
};