#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int star = n * 2 - 1;
    int space = 0;

    for (int i = 1; i <= n; i++)
    {
        for (int a = 0; a < space; a++)
        {
            printf(" ");
        }
        space++;

        for (int j = star; j >= 1; j--)
        {
            printf("*");
        }
        star = star - 2;
        printf("\n");
    }

    return 0;
}