/*
 * 给定一个数组，判断是否存在相同元素，存在则返回true，否则返回false
 *
 * 方法一：排序，之后两两比较
 * */
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        if(nums.size()==0) 
            return false;
        std::sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1])
                return true;
        }
        return false;
    }
};

/*
 *方法二： 插入到哈希表进行判断
 * */

class Solution{
public:
        bool containsDuplicate(vector<int>& nums){
                unordered_map <int> hashset;
                for(int i=0;i<nums.size();i++){
                        if(hashset.count(nums[i])!=NULL)
                                return true;
                        else
                                hashset[nums[i]]+=1;
                }
                return false;
        }
}


// 看到一个很厉害的python代码
// return len(nums)!=len(set(nums))
