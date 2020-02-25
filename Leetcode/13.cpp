class Solution {
public:
    int romanToInt(string s) {
        int len;
        len=s.length();
        int sum=0;
        for(int i=0;i<len;i++){
            switch (s[i]){
                
                case 'M':
                    sum+=1000;
                    break;
                
                case 'D':
                    sum+=500;
                    break;
                
                case 'C':
                    if((i+1<len)&&s[i+1]=='M'){
                        i++;
                        sum+=900;
                    }
                    else if((i+1<len)&&s[i+1]=='D'){
                        i++;
                        sum+=400;
                    }
                    else sum+=100;
                    break;
                
                case 'L':
                    sum+=50;
                    break;
                
                case 'X':
                    if((i+1<len)&&s[i+1]=='L'){
                        sum+=40;
                        i++;
                    }
                    else if((i+1<len)&&s[i+1]=='C'){
                        sum+=90;
                        i++;
                    }
                    else sum+=10;
                    break;
                
                case 'V':
                    sum+=5;
                    break;
                
                default:
                    if((i+1<len)&&s[i+1]=='V'){
                        i++;
                        sum+=4;
                    }
                    else if((i+1<len)&&s[i+1]=='X'){
                        i++;
                        sum+=9;
                    }
                    else sum+=1;
                    
            }
        }
        return sum;
    }
};
