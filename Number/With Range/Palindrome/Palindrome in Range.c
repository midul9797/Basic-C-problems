#include<stdio.h>

int main(){
    int a,b,n,main, reverse, remainder;

    scanf("%d %d", &a, &b);

    for(int i =a; i<=b; i++){
            reverse=0;
        n=i;
        main=i;
        while(n>0){
            remainder = n % 10;
            reverse= reverse *10 + remainder;
            n/=10;
        }
        if(reverse == main )
            printf("%d is Palindrome\n", i);
    }
    return 0;
}
