#include<stdio.h>

int main(){
    int n,sum=0;
    scanf("%d", &n);

        for(int j=1; j<=n/2; j++){
            if(n%j == 0)
                sum+=j;
        }
        if(sum == n)
            printf("%d is a Perfect Number \t", n);
        else
            printf("%d is not a Perfect Number \t", n);

    return 0;
}
