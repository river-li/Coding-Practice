class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& matrix) {
        
        vector<int> r;
        r.assign(0,0);
        if(matrix.size()==0) return r;
        int i=0,j=0;
        int m=matrix.size();
        int n=matrix.back().size();
        bool up=true;
        
        for (int k=0;k<m*n;k++){
            r.push_back(matrix.at(i).at(j));
            
            if(up){
                if(i>0&&j<n-1){
                    i--;
                    j++;
                }
                
                else if(i==0&&j<n-1){
                    j++;
                    up=false;
                }
                
                else{
                    i++;
                    up=false;
                }
            }
            
            else {
                if(i<m-1&&j>0){
                    i++;
                    j--;
                }
                else if(j==0&&i<m-1){
                    i++;
                    up=true;
                }
                else
                {
                    j++;
                    up=true;
                }
            }
        }
        return r;
    }
};
