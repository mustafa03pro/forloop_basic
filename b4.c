#include<stdio.h>
int main(){
    int n,m,r=0;
    scanf("%d",&n);
    scanf("%d",&m);
    if((n<0)||(m<0)){
        printf("Please Enter positive value");
        return 0;
    }
    printf("Armstrong numbers between %d and %d: ", n, m);
    
    for(int i=n ; i<=m;i++){
        int or = i, r, s = 0;
        int temp = or;
        
        for( ;temp != 0; ) {
            r = temp % 10;
            s += r * r * r;
            temp /= 10;
        }
        
        if (s == i) {
            printf("%d ", i);
        }
    }
    printf("\n");
    
    

    return 0;
}