#include <stdio.h>

int char_to_ascii(value)
{
    int ans = value;
    return ans;
}

int main()
{
    char x;
    scanf("%c", &x);

    int value = char_to_ascii(x);
    printf("%d", value);

    return 0;
}