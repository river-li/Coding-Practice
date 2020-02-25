//给定一个字符串，验证它是否是回文串，只考虑字母和数字字符，可以忽略字母的大小写。

//说明：本题中，我们将空字符串定义为有效的回文串。

//示例 1:

//输入: "A man, a plan, a canal: Panama"
//输出: true
//示例 2:

//输入: "race a car"
//输出: false

class Solution {
public:
    bool isPalindrome(string s) {
        int length = s.size();
        int i=0,j=length-1;
        while(i<=j){
            if(!isalnum(s[i])) {i++; continue;}
            if(!isalnum(s[j])) {j--; continue;}

            if(tolower(s[i])!=tolower(s[j])){
                return false;
            }
            i++;j--;
        }
        return true;

    }
};

//思路比较简单，直接获取长度后从头和尾依次进行比较
//需要注意的点在于比较时需要除去特殊符号，以及转化为统一大小写
