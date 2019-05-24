#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int s=0;
    int i,j;
    int nani;

    while(scanf("%d",&nani)!=EOF){
        s=0;
        int a[8][nani];
        memset(a,-1,sizeof(a));
        for(i=0;i<8;i++){
            for(j=0;j<nani;j++){
                scanf("%d",&a[i][j]);
            }
        }

        int min[nani];
        memset(min,10001,sizeof(min));
        j=0;
        while(j<nani){
            for(i=0;i<8;i++){
                if(a[i][j]<min[j])
                    min[j]=a[i][j];
            }
            j++;
        }
        for(i=0;i<nani;i++){
            s+=min[i];
        }
        printf("%d\n",s);
    }
    return 0;
}
