#include<stdio.h>

int main(){
    int n, flag=0;
    scanf("%d", &n);


        if(n==1){
            printf("%d is not a Prime Number", n);
            return 0;
        }
        for(int j=2; j<=n/2; j++){
            if(n % j == 0){
                flag = 1;
            break;
            }
        }
        if(flag == 0)
            printf("%d is a Prime Number", n);
        else
            printf("%d is not a Prime Number", n);
    return 0;

}

