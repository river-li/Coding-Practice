#include<cstdio>
#include<iostream>
#include<queue>
#include<vector>
#include<cstring>

using namespace std;

int main()
{
    int m,n;
    // m is the number of people;
    // n is the number of animals;

    while(cin>>m>>n){
        int a[100][100];
        int k;
        //k is the limit that how many animals a person can feed
        memset(a,0,sizeof(a));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                scanf("%d",&a[i][j]);
            }
        }
        scanf("%d",&k);
        int b[100];
        int f[100];
        double c[100][100];
        //b 每个人可以喂养多少动物
        //f 每个人还能喂多少动物
        //c 是一个权值
        memset(c,0,sizeof(c));
        for(int i=0;i<m;i++)
            f[i]=k;
        memset(b,0,sizeof(b));

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                b[i]+=a[i][j];
            }
        }

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                c[i][j]=1.0*a[i][j]/b[i];
            }
        }

        int flag=1;
        for(int j=0;j<n&&flag;j++){
            double max=0;
            int maxidx;
            int exist=0;
            for(int i=0;i<m;i++){
                if(c[i][j]>max&&f[i]>0){
                    max=c[i][j];
                    maxidx=i;
                    exist=1;
                }
            }
            if(!exist) {flag=0; break;}
            else f[maxidx]--;
            //使用贪心算法每次都让可以喂养动物最少的人喂养
            //如果为0则说明这个动物没人能养
        }
        if(flag) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    

    }


}
