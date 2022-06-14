#include<stdio.h>

int main(){
    int i,j,n, count;

    printf("Enter the Number of Rows = ");
    scanf("%d", &n);

    count = n*(n+1)/2;
    for(i=n; i>=1; i--){
        for(j=1;j<=i; j++){
          printf("%d ", count);
          count--;
        }
        printf("\n");
    }
    return 0;
}

