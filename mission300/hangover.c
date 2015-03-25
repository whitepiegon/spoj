#include<stdio.h>
#include<math.h>

int main() {
    float i=0,j=2, A[277];
    int k, B[6], l=0, ans;
    B[0]=0;
    while (i<=5.20) {
        i = i+(1/j);
        k = j-2;
        A[k] = i;
        if (i>l) B[l++] = k;
        j++;
    }

    while(1) {
        scanf("%f",&i);
        if (i==0) return 0;

        if (i>=5) {
            ans=B[5]; k=1;
        }
        else if (i>=4) {
            ans=B[4]; k=1;
        }
        else if (i>=3) {
            ans=B[3]; k=1;
        }
        else if (i>=2) {
            ans=B[2]; k=1;
        }
        else if (i>=1) {
            ans=B[1]; k=1;
        }
        else if (i>0.5){
            ans=B[0]; k=1;
        }
        else {
            k=0;
            printf("1 card(s)\n");
        }

        while (k) {
            if (A[ans+1]<=i) ans ++;
            else break;
        }
        if (k) {
            if (A[ans]<i) ans++;
            printf("%d card(s)\n",++ans);
        }
    }
}
