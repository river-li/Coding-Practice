#include<iostream>
#include<string>
#include<stdio.h>
#include<math.h>
using namespace std;
#define threshod 1e-9

double convert(double num,string s){
	double k=1.0; 		//set centimeter as standard
	if(s=="meters")k=100.0; //1 m == 100 cm
	if(s=="cubits")k=45.72; //1 cubit==45.72 cm
	if(s=="feet") k=30.48;	//1 feet== 30.48 cm
	if(s=="inches")k=2.54;	//1 inch== 2.54 cm
	return num*k;
}

int main()
{
	int i=0;
	double length=0,height=0,width=0;
	string flength,fheight,fwidth;
	// format word
	while(1)
	{
		i++;
		cin>>length>>flength;
		cin>>width>>fwidth;
		cin>>height>>fheight;
		printf("\n");
		
		length=convert(length,flength);
		height=convert(height,fheight);
		width=convert(width,fwidth);

		if(fabs(length-width)<threshod)
			printf("Spin");
		else if(fabs(length-6*width)<threshod)
			printf("Excellent");
		else
			printf("Neither");
		printf("\n\n");
	}
	return 0;
}
