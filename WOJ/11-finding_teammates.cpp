#include<cstdio>
#include<iostream>

using namespace std;

long long  cal_valid(int N);

int main()
{
    int N;
    while(cin>>N){    
        cout << cal_valid(N)<< endl;
    }
    return 0;
}

long long  comb(long long  n, long long  k){
	long long  a=1, b=1,c=1;
	if (k > n - k)   k = n - k;
	for(int i=1;i<=k;i++)
	{
        a *= n+1-i;
        b *= i;
    }
		
	return a/b;
}

long long cal_valid(int N){

    if(N>=0 && N<=3){
        return 1;
    }

    long long x=N/3;
    long long result =0;

    for(int i=1;i<=x;i++){
        result+=cal_valid(3*i-1)*cal_valid(N-3*i)*comb(N-1,3*i-1);
    }
    //f(N+1)=f(3*x-1)+f(N+1-3*x)*C(N,3*x-1)+(N%3==0)*(f(N))

    if(N%3==2)
        result+=cal_valid(N-1);
    
    return result;
}
