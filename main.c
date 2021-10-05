#include <stdio.h>
#include <stdlib.h>
#include "Test.h"

int main()
{
    int a = N; //宏常量
    int b = 2;
    int c = 0;

    c = a + b;
    printf("%d\n", c);

    CODE //宏替换代码段

    DoNothing();

    system("pause");
    return 0;
}
