#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#define MAXNUM 100

int max(int a,int b){
  return a>b?a:b;
}
int main(){
  int ntype;
  int size_array[MAXNUM];
  int point_array[MAXNUM];
  int noah;
  int table[100000];
  int i,j;
  int size,point;

  while(scanf("%d",&ntype)!=EOF){
    memset(table,0,sizeof(table));
    memset(size_array,0,sizeof(size_array));
    memset(point_array,0,sizeof(point_array));
    for(i=0;i<ntype;i++){
      scanf("%d %d",&size,&point);
      size_array[i]=size;
      point_array[i]=point;
    }
    scanf("%d",&noah);
    for(i=0;i<ntype;i++){
      for(j=noah;j>-1;j--){
        if(j>=size_array[i])
          table[j]=max(table[j],table[j-size_array[i]]+point_array[i]);
      }
    }
    printf("%d\n",table[noah]);
  } 
  return 0;
}
