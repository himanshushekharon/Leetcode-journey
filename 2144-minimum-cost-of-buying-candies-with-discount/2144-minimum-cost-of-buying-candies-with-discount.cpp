class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(),cost.end(),greater<int>());
        int sum=0;
        for(int c:cost){
            sum+=c;
        }
        if(cost.size()<=2){
            int sum=0;
            for(int c:cost){
                sum+=c;
            }
            return sum;
        }
        for(int i=2;i<cost.size();i+=3){
            sum-=cost[i];
        }
        return sum;
    }
};