#include <stdio.h>

int main()
{
    long long n, m, k;
    long long ans = 0;

    scanf("%lld %lld %lld", &n, &m, &k);

    if (n < m)
    {
        ans = n;

        if (ans > k)
            ans = k;

        n = n - ans;
        k = k - ans;
    }
    else
    {
        ans = m;

        if (ans > k)
            ans = k;

        n = n - ans;
        k = k - ans;
    }

    if (n / 2 < k)
        ans = ans + n / 2;
    else
        ans = ans + k;

    printf("%lld\n", ans);

    return 0;
}
