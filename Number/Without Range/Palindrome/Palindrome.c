#include<stdio.h>

int main(){
    int n,main, reverse=0, remainder;

    scanf("%d", &n);
        main=n;
        while(n>0){
            remainder = n % 10;
            reverse= reverse *10 + remainder;
            n/=10;
        }
        if(reverse == main )
            printf("%d is Palindrome\n", main);
        else
            printf("%d is not Palindrome\n", main);

    return 0;
}

