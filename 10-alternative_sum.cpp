#include<iostream>
#include<cmath>
#include<vector>
#include<cstdio>
#include<algorithm>

using namespace std;

int main()
{
  int N;
  int zero;
  while(scanf("%d",&N)!=EOF){
    if(N==0) break;
    int max_num=-2007;
    int input;
    cin>>max_num;
    for(int i=0;i<N-1;i++){
      cin>>input;
      if(input>max_num){
        max_num=input;
      }
    }
    max_num%=2006;
    if(max_num < 0) max_num +=2006;
    for(int i=0;i<N-1;i++){
      max_num*=2;
      max_num%=2006;
    }
    cout<<max_num%2006<<endl;
  }
}
