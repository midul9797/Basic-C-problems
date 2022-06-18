#include<stdio.h>

int main(){
    int a, b, flag;
    scanf("%d %d", &a ,&b);

    for(int i=a; i<=b; i++){
        flag = 0;
        if(i==1)
            continue;
        for(int j=2; j<=i/2; j++){
            if(i % j == 0){
                flag = 1;
            break;
            }
        }
        if(flag == 0)
            printf("%d \t", i);
    }
    return 0;

}
