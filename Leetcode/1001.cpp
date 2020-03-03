//You are given two sorted arrays, A and B, where A has a large enough buffer at the end to hold B. Write a method to merge B into A in sorted order.

//Initially the number of elements in A and B are m and n respectively.

//Example:

//Input:
//A = [1,2,3,0,0,0], m = 3
//B = [2,5,6],       n = 3

//Output: [1,2,2,3,5,6]

class Solution {
public:
    void merge(vector<int>& A, int m, vector<int>& B, int n) {
        vector<int> C(A);
        int i=0,j=0,p=0;
        while(i<m && j<n)
        {
            if(C[i]<=B[j])
            {
                A[p]=C[i];
                i++;
            }
            else if(C[i]>B[j])
            {
                A[p]=B[j];
                j++;
            }
            p++;
        }
        while(i<m){
            A[p]=C[i];
            p++;i++;
        }
        while(j<n){
            A[p]=B[j];
            p++;j++;
        }
    }
};

//有序列表合并，思路是用一个A的复制来与B对比，结果直接写到A中
