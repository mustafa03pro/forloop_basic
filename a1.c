#include<stdio.h>
int main(){
    int n,sum=0;
    scanf("%d",&n);
    if(n<0){
        printf("Negative value not Allowed");
        return 0;
    }
    for(int i=1;i<=n;i++){
       
        sum=sum+i;

    }
    printf("The sum of the first %d natural numbers is: %d",n,sum);

    return 0;
}