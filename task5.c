#include <stdio.h>

int capital_to_small(value)
{
    if (value >= 65 && value <= 90)
    {
        char small = value + 32;
        return small;
    }
}

int main()
{
    char x;
    scanf("%c", &x);

    int value = capital_to_small(x);
    printf("%c", value);

    return 0;
}