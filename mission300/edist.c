#include<stdio.h>
#include<string.h>
int levenshteinDistance(char A[],int a,char B[],int b);
int min(int,int,int);
int main() {
    char A[2001], B[2001];
    scanf(" %s",A);
    scanf(" %s",B);
    int a, b;
    a = strlen(A);
    b = strlen(B);
    printf("%d",levenshteinDistance(A,a,B,b));
    return 0;
}

int levenshteinDistance(char A[],int a,char B[],int b) {
    if (a==0) return b;
    if (b==0) return a;

    int cos=1;
    if (A[a-1]==B[b-1]) cos--;
    return min(levenshteinDistance(A,a-1,B,b)+1,levenshteinDistance(A,a,B,b-1)+1,levenshteinDistance(A,a-1,B,b-1)+cos);
}

int min(int i,int j, int k) {
    return (i<j?i:j)<k?(i<j?i:j):k;
}

