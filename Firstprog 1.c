#include <stdio.h>

int xorUpto(int n)
{
    if (n % 4 == 0) return n;
    else if (n % 4 == 1) return 1;
    else if (n % 4 == 2) return n + 1;
    else return 0;
}

int main()
{
    int t, n;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        printf("%d\n", xorUpto(n));
    }
    return 0;
}
