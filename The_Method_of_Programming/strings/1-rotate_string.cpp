#include<cstdio>
#include<iostream>

using namespace std;

void Rotate_string(char *s,int n);
void Reverse_string(char *s,int start,int end);


int main(){
    char s[]="abcdef";
    int n=0;

    cout<<s<<endl;

    cin>>n;

    Rotate_string(s,n);
    cout<<s<<endl;
}

/*
void Rotate_string(char *s,int n){
        char temp[20];
        for(int i=0;i<n;i++){
                temp[i]=s[i];
        }
        int i=0;
        while(*(s+i+n)!='\0'){
            *(s+i)=*(s+i+n);
            i++;
        }
        for(int j=0;j<n;j++){
                s[i]=temp[j];
                i++;
        }
}
*/



void Rotate_string(char *s,int n){
        int l;
        l = sizeof(s);
        Reverse_string(s,0,n-1);
        Reverse_string(s,n,l-3);
        Reverse_string(s,0,l-3);
}

void Reverse_string(char *s,int start,int end){
        while(start<end){
                char t=s[start];
                s[start]=s[end];
                s[end]=t;
                start++;
                end--;
        }
}
