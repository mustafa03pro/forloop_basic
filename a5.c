#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n<0){
        printf("Negative value not allowed");
        return 0;
    }
    
    for(int i=1;i<=10;i++){
        printf("%d x %d = %d\n",n,i,n*i);

    }
       
        
    

    return 0;

}