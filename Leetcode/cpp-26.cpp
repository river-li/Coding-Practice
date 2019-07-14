class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0) return 0;
        int l=1;
        int pre=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]==pre) continue;
            else{
                pre=nums[i];
                nums[l]=nums[i];
                l++;
            }
        }
        return l;
    }
};
