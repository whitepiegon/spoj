#include<stdio.h>

int A[1000] ={0};

int main() {
    long long int a, sum, i=0;
    scanf("%lld",&a);
    if (a==1) {
        printf("0");
        return 0;
    }
    while(1) {
        i++;
        sum = 0;
        while (a!=0){
            sum += (a%10)*(a%10);
            a/=10;
        }
        a = sum;
        if (a==1) {printf("%lld",i); return 0;}
        else if (A[a] == 1) {printf("-1"); return 0;}
        A[a] = 1;
    }
}
