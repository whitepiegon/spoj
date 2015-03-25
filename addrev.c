#include<stdio.h>

int main() {
int N, c1, c2, i, checked, k;
long int i1, i2, ans;
scanf("%d",&N);
while(N--) {
    c1 = 1; c2 = 1; i = 1;  checked = 0;
    int I1[10] = {0}, I2[10] = {0};
    scanf("%ld %ld",&i1,&i2);
    while (i1>0) {
        I1[c1] = i1%10;
        i1 = i1/10;
        if (I1[c1] != 0 || checked == 1) {
            checked = 1;
            c1++;
        }
    }
    checked = 0;
    while (i2>0) {
        I2[c2] = i2%10;
        i2 = i2/10;
        if (I2[c2] != 0 || checked == 1) {
            checked = 1;
            c2++;
        }
    }
if (c1>=c2) {
    while(i<c1 && i<c2) {
        I1[c1-i] = I1[c1-i] + I2[c2-i];
        if (I1[c1-i] >= 10) {
            I1[c1-i-1] = I1[c1-i-1] + I1[c1-i]/10;
            I1[c1-i] = I1[c1-i]%10;
        }
        i++;
    }
    i = 0;
    if (I1[i]==0) i = 1;  ans = 0;    k = 1;
    while (c1>=0){
        ans = I1[i] * k + ans;
        k = k * 10;
        i++; c1--;
    }
}
    else if (c2>c1) {
    while(i<c1 && i<c2) {
        I2[c2-i] = I2[c2-i] + I1[c1-i];
        if (I2[c2-i] >= 10) {
            I2[c2-i-1] = I2[c2-i-1] + I2[c2-i]/10;
            I2[c2-i] = I2[c2-i]%10;
        }
        i++;
    }
    i = 0;
    if (I2[i]==0) i = 1;  ans = 0;    k = 1;
    while (c2>=0){
        ans = I2[i] * k + ans;
        k = k * 10;
        i++; c2--;
    }
}
    printf("%ld\n",ans);
}
return 0;
}
