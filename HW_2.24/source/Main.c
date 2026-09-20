#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) 
{
    int number;

    printf("叫块俱计");
    scanf("%d", &number);

    // ノ % 2 緇计琌 0 ㄓ耞
    if (number % 2 == 0) 
    {
        printf("%d 琌案计 (Even)\n", number);
    }
    else 
    {
        printf("%d 琌计 (Odd)\n", number);
    }

    return 0;
}