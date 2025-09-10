
#include <stdio.h>
int main() {
    int m,q,sign=1,p=0;
    printf("Enter two signed integers: ");
    scanf("%d%d",&m,&q);
    if(m<0){m=-m;sign=-sign;} if(q<0){q=-q;sign=-sign;}
    for(int step=1;q>0;step++){
        if(q&1){p+=m;printf("Step %d add: p=%d\n",step,p);}
        else printf("Step %d no add: p=%d\n",step,p);
        m<<=1;q>>=1;
    }
    printf("\nResult=%d\n",sign*p);
    return 0;
}
