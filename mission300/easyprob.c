#include<stdio.h>
#define g int
#define v printf
x(g);y(g);z(g);g q=1;g main(){v("137=");y(137);x(1315);x(73);x(136);x(255);x(1384);x(16385);return 0;}y(g i){g j=2,r,k,a;if(i%2==0){a=0;while(i%j==0){a++;j*=2;}j/=2;i/=j;if(i==1)z(a);else{r=i%j;if(i-r>0)y(j*(i-r));k=j/2;while(r>0){if(r>=k){y(j*k);r-=k;}k/=2;}}}else{y(i-1);z(0);}}z(g i){if(q==2)v("+");if(i==0)v("2(0)");if(i==1)v("2");if(i==2)v("2(2)");if(i>2){v("2(");q=1;y(i);v(")");}q=2;}x(g i){v("\n%d=",i);q=1;y(i);}
