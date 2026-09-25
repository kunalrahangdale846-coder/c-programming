class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        if(nums.size()==1){
            return 0;
        }
        int s=0 , e=nums.size()-1;
        int mid;
        while(s<=e){
            mid=s+(e-s)/2;
            if((mid==0 && nums[mid]>nums[mid+1]) || (mid==nums.size()-1 && nums[mid]>nums[mid-1]) || (mid!=0 && mid!=nums.size()-1 && nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1])){
                return mid;
            }
            else if((mid == 0 && nums[mid]>=nums[0]) ||(mid!=0 && mid!=nums.size()-1 && nums[mid]>nums[mid-1] && nums[mid]<nums[mid+1])){
                s=mid+1;
            }
            else{
                e=mid;
            }
        }
        return mid;
    }
};