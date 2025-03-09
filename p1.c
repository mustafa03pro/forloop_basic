//prime or composite
#include<stdio.h>
int main(){
    int i,n,c=0;
    printf("enter the no: ");scanf("%d",&n);
    if (n==1)
    {
        printf("not prime/nor composite");
    }
    else{
        for ( i = 1; i <=n; i++)
        {
        if(n%i==0)c++;
        }
        puts(c==2?"prime no":"composite no");
    }
    
    
}