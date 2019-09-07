#include <cstdio>
#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

string Print_Next_Perm(string s);

int main(void)
{
        string s="abcde";
        cout<<s<<endl;

        while(1){
                s = Print_Next_Perm(s);
        }

        return 0;
}

string Print_Next_Perm(string s)
{
       int i;
       // 第一步
       for(i=s.length()-2;i>=0 && s[i]>=s[i+1];i--);

       if(i<0){
               return s;
       }

       int j;
       //第二步
       for(j =s.length()-1;j>i && s[j]<=s[i];j++);

       swap(s[i],s[j]);

       string s2;
       for(int k=s.length()-1;k>i;k--)
       {
               s2+=s[k];
       }
       s.replace(i+1,s2.length(),s2,0,s2.length());

       cout<<s<<endl;
       return s;
}

