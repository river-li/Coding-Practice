class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        if(nums.size()==1) return 0;
        int fl=nums.at(0);
        int fli=0;
        int sl=0;
        for(int i=1;i<nums.size();i++)
        {
            if(nums.at(i)>=fl) {sl=fl;fl=nums.at(i);fli=i;}
            else if(nums.at(i)>sl) sl=nums.at(i);
        }
        if (fl>=2*sl) return fli;
        else return -1;
    }
};
