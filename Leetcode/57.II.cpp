//输入一个正整数 target ，输出所有和为 target 的连续正整数序列（至少含有两个数）。

//序列内的数字由小到大排列，不同序列按照首个数字从小到大排列。

// 

//示例 1：

//输入：target = 9
//输出：[[2,3,4],[4,5]]
//示例 2：

//输入：target = 15
//输出：[[1,2,3,4,5],[4,5,6],[7,8]]
//限制：

//1 <= target <= 10^5


class Solution {
public:
    vector<vector<int>> findContinuousSequence(int target) {
        int up=(target-1)/2;
        vector<int> temp;
        vector<vector<int>>result;
        int i,j;
        for(i=1;i<=up;i++)
        {
            int s=0;
            int j=i;
            while(s<target)
            {
                s+=j;
                j++;
                if(s==target)
                {
                    int l=i;
                    temp.clear();
                    while(l<j)
                    {
                        temp.push_back(l);
                        l++;
                    }
                    result.push_back(temp);
                }
            }
        }
        return result;
    }
};

// 实现的代码思路是暴力破解，从1到(n-1)/2所有数都试一遍
// 还可以用数学方法优化，变成一个求一元二次方程的方法
