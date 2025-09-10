
#include <stdio.h>
int main() {
    unsigned d,s,q; int r=0,n=sizeof(unsigned)*8;
    printf("Enter dividend and divisor: ");
    scanf("%u%u",&d,&s); q=d;
    for(int i=0;i<n;i++){
        r=(r<<1)|((q>>(n-1))&1); q<<=1;
        r=(r>=0)?r-s:r+s;          // subtract or add
        if(r>=0)q|=1;
        printf("step %d r=%d q=%u\n",i+1,r,q);
    }
    if(r<0)r+=s;
    printf("\nQuotient=%u Remainder=%u\n",q,r);
    return 0;
}
