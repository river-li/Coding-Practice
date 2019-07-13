#include <cstdio>
#include <string>
#include <algorithm>
#include <iostream>

using namespace std;
bool StringContain(string s,string ct);

int main(void)
{
        string st="hellosworijs";
        string contain="hsw";
        string not_contain="hend";
        bool flag=false;

        cout<<st<<endl;

        flag =StringContain(st,contain);

        if (flag) {
                cout<<"contain True"<<endl;
        }

        flag = StringContain(st,not_contain);
        if (flag) {
                cout<<"not_contain True"<<endl;
        }
        return 0;
}

// Brute Force
/*
bool StringContain(string s,string ct)
{
        for (int i = 0; i < ct.length(); i++) {
                int j;
                for (j = 0; j < s.length() && s[j]!=ct[i]; j++) {
                }
                if (j>=s.length()) {
                        return false;
                }
        }
        return true;
}
*/

// Sort and quest
/*
bool StringContain(string s,string ct)
{
        sort(s.begin(),s.end());
        sort(ct.begin(),ct.end());
        for (int i = 0,j=0; i < ct.length(); ) {
                while(j<s.length() && s[j]<ct[i])
                {
                        j++;
                }
                if(j>=s.length() || s[j]>ct[i])
                        return false;
                i++;
        }
        return true;
}
*/
