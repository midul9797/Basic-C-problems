#include<stdio.h>

int main(){
    int n,remainder,digit,main, count, a,b,k, sum;

    scanf("%d %d", &a, &b);
    for(int i =a; i<=b; i++){
            sum =0;
    count=0;
    n=i;
    k=n;
    main = i;

    if(main == 0){
        continue;
    }
    while(n>0){
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
        printf("%d Armstrong\n", main);

    }
    return 0;
}
