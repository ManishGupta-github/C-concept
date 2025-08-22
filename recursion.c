#include <stdio.h>
int sums(int n)
{
    if (n == 1)
        return 1;
    int s = sums(n - 1) + n;
    return s;
}
int main()
{
    int k = sums(2);
    printf("%d", k);
    return 0;
}
