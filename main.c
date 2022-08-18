#include <stdio.h>
#include <stdlib.h>
#include "Function.h"
int main()
{
    int a=4,b=5;
    int dum=Sum(a,b);
    printf("%d\n",dum);
    int sub=Sub(a,b);
    printf("%d\n",sub);
    int mul=Mul(a,b);
    printf("%d",mul);
    int div=Div(a,b);
    printf("%d",div);
    return 0;
}
