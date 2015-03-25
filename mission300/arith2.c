#include<stdio.h>
#include<string.h>

int main() {
    int t=8;
    long long int i, ans, j;
    char A[1000001], o;
    char a='+', s='-', m='*', d='/', e='=';
    scanf("%d",&t);
    while (t--) {
        scanf(" %s",A);
        ans=0; j=0;
        while (A[j]!=0) {
        ans=ans*10+(A[j]-'0');
        j++;
        }
        scanf(" %c",&o);

        while (o!=e) {
            scanf(" %s",A);
            j=0; i=0;
            while (A[j]!=0) {
            i=i*10+(A[j]-'0');
            j++;
            }
            if (o==a) ans+=i;
            else if (o==s) ans-=i;
            else if (o==m) ans*=i;
            else if (o==d) ans/=i;
            scanf(" %c",&o);
        }
        printf("%lld\n",ans);
    }
    return 0;
}
