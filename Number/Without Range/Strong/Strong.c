#include<stdio.h>

int main(){
    int digit, fac,n,main, sum=0;
    scanf("%d", &n);
        main = n;
    while(n>0){
        fac=1;
        digit = n % 10;
        n/=10;
        for(int j =1; j<=digit; j++){
            fac*=j;
        }
        sum+=fac;
    }
    if(sum == main)
        printf("%d is a Strong Number\t", main);
    else
        printf("%d is not a Strong Number\t", main);
    return 0;
}

