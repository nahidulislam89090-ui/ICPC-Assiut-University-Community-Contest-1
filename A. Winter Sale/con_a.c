#include<stdio.h>
int main()
{
    float x,p,a;

    scanf("%f %f", &x, &p);

    a=(p*100)/(100-x);

    printf("%.2f", a);

    return 0;
}
