/*
ABCDE
ABCD
ABC
AB
A
*/
#include <stdio.h>

int main()
{
    int n;
    char ch='A';
    printf("Enter the numbers of line you want\n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            printf("%c",ch++);
        }
        ch='A';
        printf("\n");
    }

    return 0;
}
