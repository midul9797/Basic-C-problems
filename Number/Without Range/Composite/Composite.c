#include<stdio.h>

int main(){
    int n, flag=0;
    scanf("%d", &n);

        if(n==1){
            printf("Not a Composite Number");
            return 0;
        }
        for(int j=2; j<=n/2; j++){
            if(n % j == 0){
                flag = 1;
            break;
            }
        }
        if(flag == 1)
            printf("Composite Number");
        else
            printf("Not a Composite Number");

    return 0;

}

