#include<stdio.h>
int main(){
    int n,m,gcd=1;
    scanf("%d",&n);
    scanf("%d",&m);
    if(n<0){
        printf("Negative value not allowed");
        return 0;
    }
    if(m<0){
        printf("Negative value not allowed");
        return 0;
    }
    printf("The GCD of %d and %d is: ",n,m);
    
    for(int i=1;i<=n;i++){
        if(n%i==0 && m%i==0){
            gcd=i;
        }
        

    }
    printf("%d",gcd);
       
        
    

    return 0;

}