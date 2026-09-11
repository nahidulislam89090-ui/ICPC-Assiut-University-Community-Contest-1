#include <stdio.h>

int main()
{
    long long n, k, a, result;

    scanf("%lld %lld %lld", &n, &k, &a);

    result = n * k;

    if (result % a != 0)
        printf("double");
    else if (result / a >= -2147483648LL && result / a <= 2147483647LL)
        printf("int");
    else
        printf("long long");

    return 0;
}
