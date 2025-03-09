//fibbonachi series
#include<stdio.h>
void main(){
    int n,i;float s=1;
    printf("enter the no: ");scanf("%d",&n);printf("1+");
    
    for (i=1;i<=n;i++)
    {
       s=s+1.0/i;
       if(i<n)printf("1/%d+",i);
       else printf("1/%d=%.2f",i,s); 
    }
    
    
        
    
    
}
