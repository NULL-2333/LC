class Solution {
public:
    int maxV(vector<int> a){
        int ma = a[0];
        for(int i = 0; i < a.size(); i++){
            if(a[i] > ma)
                ma = a[i];
        }
        return ma;
    }
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        vector<int> tb, lr;
        for(int i = 0; i < grid[0].size(); i++){
            vector<int> col;
            for(int j = 0; j < grid.size(); j++){
                col.push_back(grid[j][i]);
            }
            tb.push_back(maxV(col));
        }
        for(int i = 0; i < grid.size(); i++){
            lr.push_back(maxV(grid[i]));
        }
        int** gridNew = new int*[grid.size()];
        for(int i = 0; i < grid.size(); i++){
            gridNew[i] = new int[grid[0].size()];
        }
        int x = 0;
        
        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[0].size(); j++){
                gridNew[i][j] = min(tb[j], lr[i]);
                x += (gridNew[i][j] - grid[i][j]);
            }
        }
        return x;
    }
};