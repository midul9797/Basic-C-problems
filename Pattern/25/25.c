#include<stdio.h>

int main(){
    int i,j,n, count=1;

    printf("Enter the number of Rows = ");
    scanf("%d", &n);

    for(i = n; i>=1; i--){
        for(j = 1; j<=n-i; j++){
            printf("  ");
        }
        for(j=1; j<=2*i-1; j++){
            printf("* ");
        }
        printf("\n");
    }
}
