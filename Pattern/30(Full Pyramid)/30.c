#include<stdio.h>

int main(){
    int i,j,n,k;

    printf("Enter the Number of Rows = ");
    scanf("%d", &n);

    for(i=1; i<=n; i++){
            k=i;
        for(j=1; j<=n-i; j++){
            printf("  ");
        }
        for(j=1; j<=2*i-1; j++){
            if(j > i-1)
                printf("%d ", k--);
            else
                printf("%d ", k++);

        }
//        for(j=i; j<=2*i-1; j++){
//            printf("%d ", j);
//        }
//        for(j=2*i-2; j>=i; j--){
//            printf("%d ", j);
//        }
        printf("\n");
    }

}
