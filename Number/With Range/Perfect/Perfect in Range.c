#include<stdio.h>

int main(){
    int a, b,sum;
    scanf("%d %d", &a,&b);

    for(int i=a; i<=b; i++){
        sum=0;
        for(int j=1; j<=i/2; j++){
            if(i%j == 0)
                sum+=j;
        }
        if(sum == i)
            printf("%d \t", i);
    }
    return 0;
}
