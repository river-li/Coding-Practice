class Solution {
public:
    int reverse(int x) {
        int c;
        int res=0;
        const int overflow=2^31-1;
        while(x){
            c=x%10;
            x=x/10;
            if(res>INT_MAX/10 || res<INT_MIN/10) return 0;
            res=res*10+c;
        }
        return res;
    }
};
