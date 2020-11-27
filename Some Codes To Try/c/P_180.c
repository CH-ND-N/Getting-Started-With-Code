#include <stdio.h>
int main()
{
    int i, j, k, n;
    printf("Enter the no.= ");
    scanf("%d", &n);
    for(i = 0  ;i<= n ; i++)
    {
        for(j= 0 ; j<+n ; j++)
        {
            k = n - i;
            if(j<= k )
            {
                printf(" ");
            }
            else
            {
                printf("*");

            }
        }
        printf("\n");
    }
}    