#include<stdio.h>

int main(){
    int a,b, n1=0,n2=1,n3;

    scanf("%d %d", &a, &b);

    while(n3 <= b){
            if(n3>=a)
                printf("%d\t", n3);

            n3=n1+n2;
            n1=n2;
            n2=n3;
    }
    return 0;
}
