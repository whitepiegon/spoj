#include<stdio.h>
int machula (char A[18], int i);

int main () {
    int t, i1, i2, sum, cas;
    char I1[18], I2[18], S[18], ch;
    scanf("%d",&t);
    while (t--) {
        cas = -1;
        scanf(" %s",I1);
        scanf (" %c",&ch);
        scanf(" %s",I2);
        scanf (" %c",&ch);
        scanf(" %s",S);

        cas = machula (I1,1);
        if (cas==-1) cas = machula (I2,2);
        if (cas==-1) cas = machula (S,3);

        if (cas == 1) {
            i2 = getInt(I2);
            sum = getInt(S);
            i1 = sum - i2;
        }
        else if (cas == 2) {
            i1 = getInt(I1);
            sum = getInt(S);
            i2 = sum - i1;
        }
        else if (cas == 3) {
            i2 = getInt(I2);
            i1 = getInt(I1);
            sum = i1+i2;
        }
        printf ("%d + %d = %d\n",i1,i2,sum);
    }
    return 0;
}

int getInt (char A[18]) {
    int a=0, i=0, n;
    while (A[i] != 0) {
        n = A[i] - 48;
        a = a*10 +n;
        i++;
    }
    return a;
}

int machula (char A[18], int i) {
    int k=0;
    while (A[k] != 0) {
        if (A[k] == 109) return i;
        k++;
    }
    return -1;
}
