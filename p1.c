#include<stdio.h>
void main(){
    int n;
    printf("enter the no: ");scanf("%d",&n);
    for (int i = 1; i < 11; i++)
    {
        printf("%d * %d = %d\n",n,i,n*i);
    }
    
}