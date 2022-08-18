#include <stdio.h>
#include <stdlib.h>
#include "Function.h"
int main()
{
    int a=4,b=5;
    int sum=Sum(a,b);
    printf("%d\n",sum);
    int sub=Sub(a,b);
    printf("%d\n",sub);
    int mul=Mul(a,b);
    printf("%d",mul);
    return 0;
}
