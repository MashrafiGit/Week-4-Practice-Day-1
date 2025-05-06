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
        star++;
        printf("\n");
    }

    return 0;
}