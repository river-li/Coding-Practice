class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int c=1;
        for(int i=digits.size();i>0;i--){
            if(c==1) digits.at(i-1)+=1;
            if (digits.at(i-1)==10) {c=1; digits.at(i-1)=0;}
            else c=0;
        }
        if (c==1) {digits.at(0)=0; digits.insert(digits.begin(),1);}
        return digits;
    }
};
