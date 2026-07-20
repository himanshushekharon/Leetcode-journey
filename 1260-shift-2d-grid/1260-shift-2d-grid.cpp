class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        vector<int>v;
        int n=grid.size();
        int m=grid[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                v.push_back(grid[i][j]);
            }
        }   
        int x=n*m;
        k=k%x;
        vector<vector<int>>sg(n,vector<int>(m));
        if(k>0) rotate(v.rbegin(),v.rbegin()+k,v.rend());
        int z=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                sg[i][j]=v[z++];
            }
        } 
        return sg;
    }
};