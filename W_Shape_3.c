#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int star = 1;
    int space = n - 1;

    for (int i = 1; i <= n; i++)
    {
        for (int a = 1; a <= space; a++)
        {
            printf(" ");
        }
        space--;

        for (int j = 1; j <= star; j++)
        {
            printf("*");
        }
        star = star + 2;
        printf("\n");
    }

    int star2 = n * 2 - 1;
    int space2 = 0;

    for (int i = 1; i <= n; i++)
    {
        for (int a = 0; a < space2; a++)
        {
            printf(" ");
        }
        space2++;

        for (int j = star2; j >= 1; j--)
        {
            printf("*");
        }
        star2 = star2 - 2;
        printf("\n");
    }

    return 0;
}