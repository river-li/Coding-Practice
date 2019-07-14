#include<stdio.h>
#include<string.h>

int main()
{
	char *name[13]={"Adam","Seth","Enosh","Kenan","Mahalalel",
                    "Jared","Enoch","Methuselah","Lamech","Noah",
                    "Shem","Ham","Japheth"};
	
	int ancestor[13]={1,2,3,4,5,6,7,8,9,10,11,11,11};

	int age[9]={930,912,905,910,895,962,365,969,777};

	char name1[20],name2[20];
	
	while(scanf("%s%s",&name1,&name2)!=EOF){
		int i=0,j=0,idx1=0,idx2=0;

		for(i=0;i<13;i++)
		{
			if(!strcmp(name[i],name1))
				idx1=i;
		}
		
		for(j=0;j<13;j++)
		{
			if(!strcmp(name[j],name2))
				idx2=j;
		}
		
		if(ancestor[idx1]<ancestor[idx2])
			printf("Yes\n");
		else
			printf("No\n");

		if(idx1>8||idx2>8)
			printf("No enough information\n");
		else
		{
			if(age[idx1]>age[idx2])
				printf("Yes\n");
			else
				printf("No\n");
		}

	}
	return 0;
}
