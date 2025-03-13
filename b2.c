#include<stdio.h>
int main(){
    int n,f1=0,f2=1,f3;
    scanf("%d",&n);
    if(n<0){
        printf("Please enter a positive integer.");
        return 0;
    }
    for(int i=1;i<=n;i++){
        printf("%d",f1);
        f3=f1+f2;
        f1=f2;
        f2=f3;
    }
    printf(" %d ",f1);

    
   
    return 0;
}