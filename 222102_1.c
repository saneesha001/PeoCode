#include <stdio.h>
/* Develop a program to display numbers from 1 to any given number */
int main()
{
    int i, n;

    printf("Enter any number: ");
    scanf("%d", &n);

    printf("Print numbers from 1 to %d : \n", n);

    for(i=1; i<=n; i++)
    {
        printf("%d\n", i);
    }

    return 0;
}