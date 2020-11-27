#include <stdio.h>

int main()
{
    double i, j, k, n;
    printf("Enter the no.= ");
    scanf("%lf", &n);
    //printf("rows = %lf columns = %lf\n", rows, columns);
    for (i =1 ; i< n; i++)
    {
        for (j =1; j <= i; j++)
        {
            printf("*");
        }
        
        printf("\n");
    }
}
