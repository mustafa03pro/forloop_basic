#include<stdio.h>
int main(){
    int n,c=0;
    scanf("%d",&n);
    if(n<0){
        printf("Please Enter Positive Values");
        return 0;


    }
    else {
        for(int i=2;i<=n/2;i++){
        if(n%i==0)c++;
     }

    }
   if(c==0){
        printf("%d is a prime number.",n);
        
    }
    else{
        printf("%d is not a prime number.",n);
        
    }
    return 0;
}