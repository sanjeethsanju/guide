#include <stdio.h>

int main ()
{
int i, a[50];
for (i=1; i<=20; i++)
{
    a[i]=i;
    if (a[i] % 2 == 0)
{
printf("%d ", a[i]);
}
}
return 0;
}
