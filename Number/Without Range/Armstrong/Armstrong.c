#include<stdio.h>

int main(){
    int n,remainder,digit,main, count=0, k, sum=0;

    scanf("%d", &n);
    k=n;
    main = n;


    while (n>0){
        digit = n % 10;
        n/=10;
        count++;
    }
    while(k>0){
        remainder = k%10;
        sum = sum + pow(remainder, count);
        k/=10;
    }

    if(main == sum)
        printf("%d is a Armstrong\n", main);
    else
        printf("%d is not a Armstrong", main);

    return 0;
}
