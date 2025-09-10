#include <stdio.h>
int main() {
    unsigned d,s,q=0,r=0;
    printf("Enter dividend and divisor: ");
    scanf("%u%u",&d,&s);
    for(int i=sizeof(unsigned)*8-1;i>=0;i--){
        r=(r<<1)|((d>>i)&1);
        if(r>=s){r-=s;q|=1u<<i;}
        printf("i=%d r=%u q=%u\n",i,r,q);
    }
    printf("\nQuotient=%u Remainder=%u\n",q,r);
    return 0;
}
