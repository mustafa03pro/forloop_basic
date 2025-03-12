#include<stdio.h>
int main(){
    int n,first=1;
    scanf("%d",&n);
    if(n<0){
        printf("Negative value not allowed");
        return 0;
    }
    printf("The divisors of %d are: ", n);
    for(int i=1;i<=n;i++){
       
        if(n%i==0){
            if(first){
                printf("%d", i);
                first=0;
            }
            else{
                printf(" %d", i);
            }    
        }

    }
    

    return 0;
}