#include<stdio.h>
int main(){
    int n,r,rev=0;
    scanf("%d",&n);
     int i=n;
    for(;i<=n;n=n/10){
        r=n%10;
        rev=rev*10+r;
        
        

        
    }
    if(i==rev){
        printf("%d is a palindrome.",i);
    }
    else{
        printf("%d is not a palindrome.",i);
    }

    
   
    return 0;
}