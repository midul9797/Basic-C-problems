#include<stdio.h>

int main(){
    int n, fac=1;

    scanf("%d",  &n);

        for(int j=1; j<=n; j++){
            fac*=j;
        }
        printf("%d \n", fac);
    return 0;
}

