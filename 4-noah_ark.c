#include<stdio.h>
#include<stdlib.h>
#include<string.h>  
 
int main()
{
    double metre[3];
    double temp; 
    char a[3][15]; 
    double val;
    val = 0.0000001; 
    int i , j;
    while(scanf("%lf", &temp)!=EOF) 
    { 
                          metre[0] = temp;
                          scanf("%s",a[0]); 
    for(i = 1; i < 3; i++)
    {        scanf("%lf",&metre[i]); 
              scanf("%s", a[i]);
              } 
              for(i = 0; i < 3; i++)
              { 
              if(strcmp(a[i],"inches") == 0) metre[i] *= 2.54; 
              else if(strcmp(a[i],"centimeters") == 0) metre[i] *= 1; 
              else if(strcmp(a[i],"meters") == 0) metre[i] *= 100; 
              else if(strcmp(a[i],"feet") == 0) metre[i] *= 30.48;
              else if(strcmp(a[i],"cubits") == 0) metre[i] *= 45.72; 
              }  
                  if((metre[0] - metre[1]) < val&&(metre[0] - metre[1]) > -1*val)
                        printf("Spin");
                  else if(((metre[0]-6*metre[1])) < val && ((metre[0]-6*metre[1])) > -1*val ) 
                        printf("Excellent");
                  else printf("Neither");
                  printf("\n\n"); 
              
      }                
    return 0;
}          
