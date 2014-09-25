#include <stdio.h>

int Foo1(int a, int b)
{
    if (a == 0 || b == 0)
    {
        printf("don't do that");
        return 0;
    }
    int c = a % b;
    if (c == 0)
            return b;
        return Foo(b, c);
}
