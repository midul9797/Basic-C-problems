#include<stdio.h>

int main(){
    int a,b,digit, fac,n,main, sum=0;
    scanf("%d %d", &a,&b);
    for(int i=a; i<=b; i++){
        n=i;
        main = i;
        sum=0;
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
        printf("%d \t", i);
    }
    return 0;
}
