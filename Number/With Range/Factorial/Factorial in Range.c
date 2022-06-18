#include<stdio.h>

int main(){
    int a, b, fac=1;

    scanf("%d %d", &a, &b);

    for(int i =a; i<=b; i++){
            fac=1;
        for(int j=1; j<=i; j++){
            fac*=j;
        }
        printf("%d \n", fac);
    }
    return 0;
}
