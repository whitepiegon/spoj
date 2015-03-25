#include<stdio.h>
#include<stdlib.h>

struct nodeLinkedList {
long int nValue;
int cou;
struct nodeLinkedList *path;
};
void mergeSort (struct nodeLinkedList **startNode);
void splitUni (struct nodeLinkedList **node1, struct nodeLinkedList **A, struct nodeLinkedList **B);
struct nodeLinkedList * sortMerge (struct nodeLinkedList **node1, struct nodeLinkedList **node2);

int main() {
    int t;
    long int n, v;
    long long int ans;
    scanf("%d",&t);
    struct nodeLinkedList *root, *node, *last;
    while (t--) {
        scanf("%ld %ld",&n,&v);
        n--;
        node = (struct nodeLinkedList*)malloc(sizeof(struct nodeLinkedList));
        node->nValue=v;
        node->cou=1;
        root = node;
        while (n--) {
            last = node;
            scanf("%ld",&v);
            node = (struct nodeLinkedList*)malloc(sizeof(struct nodeLinkedList));
            node->nValue=v;
            node->cou=last->cou + 1;
            last->path=node;
        }
        node->path=NULL;

        mergeSort(&root);

        ans = 0;
        node = root;
        n=1;
        while (node != NULL) {
            printf("cou : %d val : %ld\n",node->cou,node->nValue);
            if (node->cou < n) ans+=n-node->cou;
            n++; node=node->path;
        }
    printf("%lld",ans);
    }
    return 0;
}
void mergeSort (struct nodeLinkedList **startNode) {
    struct nodeLinkedList *A, *B, *uni;
    uni = *startNode;
    if (uni -> path == NULL) return;
    splitUni (&uni, &A, &B);
    mergeSort (&A);
    mergeSort (&B);
    uni = sortMerge (&A, &B);
    *startNode = uni;
    return;
}
void splitUni (struct nodeLinkedList **node1, struct nodeLinkedList **A, struct nodeLinkedList **B) {
    struct nodeLinkedList *n1, *n2, *uni;
    uni = *node1;
    *A = uni;
    n1 = uni;
    n2 = uni;
    while (n2 -> path != NULL && n2 -> path -> path !=NULL) {
        n1 = n1 -> path;
        n2 = n2 -> path -> path;
    }
    *B = n1 -> path;
    n1 -> path = NULL;
    return;
}
struct nodeLinkedList * sortMerge (struct nodeLinkedList **node1, struct nodeLinkedList **node2) {
    struct nodeLinkedList *A, *B, *uni, *fir;
    A = *node1;
    B = *node2;
    if (A == NULL) {
        return B;
    }
    else if (B == NULL) {
        return A;
    }
    else {
        if(A -> nValue <= B -> nValue) {
            fir = A;
            uni = A;
            A = A -> path;
        }
        else {
            uni = B;
            fir = B;
            B = B -> path;
        }
        while (A != NULL && B != NULL) {
            if(A -> nValue <= B -> nValue) {
                uni -> path = A;
                uni = uni -> path;
                A = A -> path;
            }
            else {
                uni -> path = B;
                uni = uni -> path;
                B = B -> path;
            }
        }
        if (A == NULL) {
                uni -> path = B;
                B = NULL;
        }
        else if (B == NULL) {
            uni -> path = A;
            A = NULL;
        }
    }
    *node1 = A;
    *node2 = B;
    return fir;
}
