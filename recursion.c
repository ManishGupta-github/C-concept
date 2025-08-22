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
//      int s = n + sums(n - 1);
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
void printN(int);
int main()
{
    printN(6);

    return 0;
}
void printN(int n)
{
    if (n > 0)
    {
        printN(n - 1);
        printf(" %d", n);
    }
}