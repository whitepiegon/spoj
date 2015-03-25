#include<stdio.h>
#include<string.h>

int main() {
    char A[101], B[101], u='_';
    int i, j, c, t1, t2;
    while (scanf(" %s",A) != EOF) {
        i=0;j=0;c=0;t2=0;t1=0;
        while (A[i]!=0) {
            if (A[i]>=97 && A[i]<=123) {
                B[j] = A[i] - c;
                c=0;
            }
            else if(A[i]==95) {
                if (c==32) {
                    printf("Error!\n");
                    c=2;break;
                }
                c=32; j--; t1=1;
            }
            else if(A[i]>=65 && A[i]<=91) {
                if (c==32) {
                    printf("Error!\n");
                    c=2;break;
                }
                B[j++] = '_';
                B[j] = A[i] + 32;
                t1 = 2;
            }
            else {
                printf("Error!\n");
                c=2;break;
            }
            if (i==0 && (A[i]==95 || A[i]<=91)) {
                printf("Error!\n");
                c=2;break;
            }
            else if (t2==0) t2=t1;
            else if (t2!=t1) {
                printf("Error!\n");
                c=2;break;
            }
            i++;j++;
        }
        B[j] = 0;
        if(c==32) {
            printf("Error!\n");
            c=2;
        }
        if (c!=2) printf("%s\n",B);
    }
    return 0;
}
