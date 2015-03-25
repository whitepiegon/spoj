#include<stdio.h>
void quicksort(int x[1001],int first,int last);

int main () {
    long int t,i;
    int A[1001], n, sum,j;
    scanf("%ld",&t);
    for (i=1;i<=t;i++) {
        scanf("%d %d",&sum,&n);
        for (j=0;j<n;j++) scanf("%d",&A[j]);
        quicksort(A,0,n-1); j=0;
        while (sum>0 && j<n) {
            sum -= A[j];
            j++;
        }
        if (sum<=0) printf("Scenario #%d:\n%d\n\n",i,j);
        else printf("Scenario #%d:\nimpossible\n\n",i);
    }
    return 0;
}

void quicksort(int x[1001],int first,int last){
    int pivot,j,temp,i;

    if(first<last){
        pivot=first;
        i=first;
        j=last;

        while(i<j){
            while(x[i]>=x[pivot]&&i<last)
                i++;
            while(x[j]<x[pivot])
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
