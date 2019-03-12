#include<iostream>
#include<algorithm>
#include<cstdio>
#include<string>
#include<vector>

using namespace std;
bool cmp(string a,string b)
{
  return a<b;
}
int main()
{
  string s;
  while(cin>>s){
  
  int l=s.size();
  string array[s.size()];
  for(int i=0;i<s.length();i++){
    array[i]=string(s,i,s.length());
    array[i].append(string(s,0,i));
  }
  sort(array,array+l);
  cout<<array[0]<<endl;
  }

}
