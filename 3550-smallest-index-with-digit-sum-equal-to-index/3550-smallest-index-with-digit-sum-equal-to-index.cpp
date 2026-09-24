class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        for(int i=0 ; i<nums.size() ; i++){
            int total=0;
            int var=nums[i];
            while(var!=0){
                total+=var%10;
                var=var/10;
            }
            if(total==i){
                return i;
            }
        }
        return -1;
    }
};