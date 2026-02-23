#include <stdio.h>

void foo(int *a)
{
  *a = *a + 10;
}

int main()
{
  int a = 42;

  foo(&a);
  printf("%d\n", a);
}