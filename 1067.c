#include<stdio.h>
int main()
{
    int a, x;
    scanf("%d", &x);
   a = 1;
    while (a <= x)
    {
        if( a % 2 != 0)
        {
            printf("%d\n", a);
        }
        a++;
    }

    return 0;
}
