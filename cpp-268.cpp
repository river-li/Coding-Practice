class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int s=0;
        for(int i=0;i<nums.size();i++){
            s+=nums[i];
        }
        return (((0+nums.size()+1)*(nums.size())>>1)-s);
    }
};
