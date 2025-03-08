// #include<stdio.h>
// #include<math.h>
// void main(){
//     int n,m,r,c=0,s=0;
//     printf("enter the no: ");scanf("%d",&n);
//     for (m=n;m!=0;m/=10)c++;
    
//     for (m=n;m!=0;m/=10 )s+=pow(m%10,c);
//     puts(s==n?"Armstrong no":"not an amstrong no");
       
    
    
    
// }
#include<stdio.h>
#include<math.h>
int main(){
    int n,m,r,c=0,s=0;printf("enter the no: ");
    scanf("%d",&n);
    for (m=n; m!=0; m/=10) 
    c++;
    for (m=n; m!=0; m/=10) 
    s += pow(m%10, c);
    if(n==s){
        printf("Armstrong no");
    }
    else printf("not an armstrong");
    return 0;



    

}

