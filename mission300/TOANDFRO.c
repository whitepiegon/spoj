#include<stdio.h>
#include<string.h>

int main() {
    int col, row, length, r_, c_, i, add;
    char A[200];
    while (1) {
        scanf("%d",&col);
        if (col == 0) return 0;
        scanf(" %s",A);
        length = strlen(A);
        row = length/col;
        c_ = 0;
        while (c_<col) {
            r_ = 0;
            i = c_;
            add = 2*(col-c_) - 1;
            while (r_<row) {
                printf("%c",A[i]);
                i = i+add;
                add = 2*col - add;
                r_ ++;
            }
            c_ ++;
        }
        printf("\n");
    }
}
