#include <stdio.h>
// calculate sum of n number using recursion
//  int sums(int);
//  int main()
//  {
//      int k = sums(5);
//      printf("%d", k);
//      return 0;
//  }
//  int sums(int n)
//  {
//      if (n == 1)
//          return 1;
//      int s = sums(n - 1) + n;
//      return s;
//  }
// calculate factorial of n number using recursion
//  int fact(int);
//  int main()
//  {
//      int k = fact(5);
//      printf("%d", k);
//      return 0;
//  }
//  int fact(int n)
//  {
//      if (n == 1)
//          return 1;
//      int s = n * fact(n - 1);
//      return s;
//  }
// print first n natural number using recursion
int printN(int);
int main()
{
    int k = printN(6);
    printf("%d", k);
    return 0;
}
int printN(int n)
{
    if (n == 1)
        return 1;
    int s = n + printN(n - 1);
    return s;
}