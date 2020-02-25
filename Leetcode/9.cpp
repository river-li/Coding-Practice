class Solution {
public:
    bool isPalindrome(int x) {
        int rev=0;
        int pop;
        int temp=x;
        while(x){
            pop=x%10;
            x=x/10;
            rev=rev*10+pop;
        }
        if (rev==temp&&temp>=0)
            return true;
        else
            return false;
    }
};
