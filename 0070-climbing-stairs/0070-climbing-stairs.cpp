class Solution {
public:
    int climbStairs(int n) {
        vector<int> search(46);
        for(int i=0 ; i<46 ; i++){
            search[i]=1;
        }
        for(int i=2 ; i<46 ; i++){
            search[i]=search[i-1]+search[i-2];
        }

        return search[n];
    }
};