#include<stdio.h>
void printeven (char A[], int len);
void printodd (char A[], int len);
int spclcase (char A[],int mid2,int len);
void printarr (char A[], int eo, int mm);

int main() {
    int t, len, i;
    char A[1000000];
    scanf("%d",&t);
    while (t--) {
        scanf (" %s",A);
        len = strlen(A);
        if (len==1) {
            i = A[0] - 48;
            i++;
            if (i==10) printf("11\n");
            else printf ("%d\n",i);
        }
        else if (len%2 == 0) printeven(A,len);
        else printodd(A,len);
    }
    return 0;
}

void printeven(char A[], int len) {
    //0 :: 48
    int bol = 1, num;
    int mid2 = len/2;
    int mid1 = mid2-1;
    int k = mid1, cou1=0;

    while (A[k]==A[mid2]) {
        cou1++; if (cou1==len/2) break;
        k--; mid2++;
    }

    if (cou1<len/2) {
        if (A[k]<A[mid2]) {
            num = A[mid1] - 48;
            num++;
            if (num==10) bol = spclcase(A,mid1,len);
            else {
                A[mid1] = '0' + num;
            }
        }
    }

    if (cou1==len/2) {
        num = A[mid1] - 48;
        num++;
        if (num==10) bol = spclcase(A,mid1,len);
        else {
            A[mid1] = '0' + num;
        }
    }
    if (bol) printarr(A,0,len/2);
}

void printodd(char A[], int len) {
    int bol = 1, num;
    int mid = len/2;
    int mid2 = mid + 1;
    int mid1 = mid - 1;
    int k = mid1, cou1=0;

    while (A[k]==A[mid2]) {
        cou1++; if (cou1==len/2) break;
        k--; mid2++;
    }

    if (cou1<len/2) {
        if (A[k]<A[mid2]) {
            num = A[mid] - 48;
            num++;
            if (num==10) bol = spclcase(A,mid,len);
            else {
                A[mid] = '0' + num;
            }
        }
    }

    if (cou1==len/2) {
        num = A[mid] - 48;
        num++;
        if (num==10) bol = spclcase(A,mid,len);
        else {
            A[mid] = '0' + num;
        }
    }
    if (bol) printarr(A,1,len/2);
}

void printarr(char A[], int eo, int mm) {
    int i;
    if (eo==0) {
        for (i=0;i<mm;i++) printf("%c",A[i]);
        for (i=mm-1;i>=0;i--) printf("%c",A[i]);
        printf("\n");
    }
    else if (eo==1) {
        for (i=0;i<=mm;i++) printf("%c",A[i]);
        for (i=mm-1;i>=0;i--) printf("%c",A[i]);
        printf("\n");
    }
}

int spclcase(char A[],int mid,int len) {
    int num = A[mid] - 48;
    num++;
    if (num!=10) {
        A[mid] = '0' + num;
        return 1;
    }
    else {
        if (mid != 0) {
            A[mid] = '0'; mid--;
            return spclcase(A,mid,len);
        }
        else {
            printf("1");
            for (num=1;num<len;num++) printf("0");
            printf("1\n");
            return 0;
        }
    }
};
