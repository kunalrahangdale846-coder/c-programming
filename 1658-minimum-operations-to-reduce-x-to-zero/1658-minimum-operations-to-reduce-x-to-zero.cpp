class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int total = 0;

        for(int i = 0; i < nums.size(); i++) {
            total += nums[i];
        }

        int element = total - x;

        if(element < 0)
            return -1;

        int s = 0;
        int ans = -1;
        int sum = 0;

        for(int e = 0; e < nums.size(); e++) {

            sum += nums[e];

            while(sum > element) {
                sum -= nums[s];
                s++;
            }

            if(sum == element) {
                ans = max(ans, e - s + 1);
            }
        }

        if(ans == -1)
            return -1;

        return nums.size() - ans;
    }
};