//fibbonachi series
#include<stdio.h>
void main(){
    int n,r1,r2;
    printf("enter the no: ");scanf("%d",&n);
    
    for (r1=n%10,n=n/10;n!=0;n=n/10 )
    {
        r2=n%10;
        if(r1-r2==1||r2-r1==1)r1=r2;
        else {puts("not a step no");return;}
    }
    puts("step no");
    
        
    
    
}
