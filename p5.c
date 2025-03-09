//fibbonachi series
#include<stdio.h>
void main(){
    int n,r,s1,s2;
    printf("enter the no: ");scanf("%d",&n);
    
    for (s1=0,s2=1;n!=0;n=n/10 )
    {
        r=n%10;
        s1=s1+r;s2=s2*r;
    }
    puts(s1==s2?"spy no":"not a spy no");
    
        
    
    
}
