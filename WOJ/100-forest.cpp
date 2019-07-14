#include<string>
#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	char* name_list[8] = {"littleken", "knuthocean", "dongfangxu", "zap", "kittig", "robertcui", "forest", "flirly" };  
    char s1[8] = { 'l', 'k', 'd', 'z', 'k', 'r', 'f', 'f' };  
    char s2[8] = { 'i', 'n', 'o', 'a', 'i', 'o', 'o','l' };  
    int next[8] = { 9, 10, 10, 3, 6, 9, 6, 6 };
	int N;
	cin >> N;
	for(int h=0;h<N;h++)
	{
		string s;
		cin >> s;
		int name_count[8];
		memset(name_count,0,sizeof(name_count));

		for(string::iterator it=s.begin();it!=s.end();){
			for(int i=0;i<8;i++){
				if(*it==s1[i]&&*(it+1)==s2[i]){
					name_count[i]++;
					it+=next[i];
					break;
				}
			}
		}

		int flag=0;
		for(int i=0;i<8;i++){
			if(name_count[i]>name_count[flag]){
				name_count[flag]=name_count[i];
				flag=i;
			}
		}
		cout<<name_list[flag]<<endl;

	}
}



	

	