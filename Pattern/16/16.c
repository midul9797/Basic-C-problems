#include<stdio.h>

int main(){
    int i,j,n;

    printf("Enter the Number of Rows = ");
    scanf("%d", &n);

    for(i=n; i>=1; i--){
        for(j=1;j<=n-i; j++){
          printf("  ");
        }
        for(j=i;j>=1; j--){
          printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
}



