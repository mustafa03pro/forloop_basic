#include<stdio.h>
void main(){
    int n,i,s=0;
    printf("enter the no: ");scanf("%d",&n);
    for ( i = 1; i <=n/2; i++)
    {
        if(n%i==0)s+=i;
    }
    puts(n==s?"perfect no":"not a perfect no");

    
}