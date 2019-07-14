class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> r;
        vector<int> n(0);
        for (int i=0;i<numRows;i++)
        {
            n.clear();
            for(int j=0;j<=i;j++)
            {
                if(i==0||j==0||i==j) n.push_back(1);
                else if(i>=1&&j>=1) n.push_back(r[i-1][j]+r[i-1][j-1]);
            }
            r.push_back(n);
        }
        return r;
    }
};
