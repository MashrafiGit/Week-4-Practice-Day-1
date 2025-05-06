#include <stdio.h>

int small_to_capital(value)
{
    if (value >= 97 && value <= 122)
    {
        char capital = value - 32;
        return capital;
    }
}

int main()
{
    char x;
    scanf("%c", &x);

    int value = small_to_capital(x);
    printf("%c", value);

    return 0;
}