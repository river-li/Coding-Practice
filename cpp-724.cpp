class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int s=0;
        for(int i=0;i<nums.size();i++)
        {
            s+=nums.at(i);
        }
        int k=0;
        for(int i=0;i<nums.size();i++)
        {
            if(k*2==s-nums.at(i))
                return i;
            k+=nums.at(i);
        }
	return -1;
    }
};
