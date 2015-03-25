#include<stdio.h>
void quicksort(int [1000],int,int);

int main () {
    int T, N, A[1000], B[1000], i, ans;
    scanf("%d",&T);
    while (T--) {
        scanf("%d",&N);
        for (i=0;i<N;i++) scanf("%d",&A[i]);
        for (i=0;i<N;i++) scanf("%d",&B[i]);
        quicksort(A,0,N-1);
        quicksort(B,0,N-1);
        ans = 0;
        for (i=0;i<N;i++) ans = ans + A[i]*B[i];
        printf("%d\n",ans);
    }
    return 0;
}

void quicksort(int x[1000],int first,int last){
    int pivot,j,temp,i;

    if(first<last){
        pivot=first;
        i=first;
        j=last;

        while(i<j){
            while(x[i]<=x[pivot]&&i<last)
                i++;
            while(x[j]>x[pivot])
                j--;
            if(i<j){
                temp=x[i];
                x[i]=x[j];
                x[j]=temp;
            }
        }

        temp=x[pivot];
        x[pivot]=x[j];
        x[j]=temp;
        quicksort(x,first,j-1);
        quicksort(x,j+1,last);

    }
}
