#include<stdio.h>

int main(){
    int i,j,k,n;

    printf("Enter the Number of Rows = ");
    scanf("%d", &n);

    for(i=0; i<n; i++){
        for(j=1; j<=n-i; j++){
            printf("  ");
        }
        for(j=0; j<= i; j++){
            if(j==0 || i==0){
                k=1;
            }else{
                k=k*(i-j+1)/j;
            }
            printf("%4d", k);
        }
        printf("\n");
    }
    return 0;
}
