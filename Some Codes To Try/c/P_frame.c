#include <stdio.h>

int main()
{
    double i, j, k, rows, columns;
    printf("Enter the no. of rows= ");
    scanf("%lf", &rows);
    printf("Enter the no. of columns= ");
    scanf("%lf", &columns);
    printf("rows = %lf columns = %lf\n", rows, columns);
    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= columns; j++)
        {
            if (i == rows || j == columns || i == 1 || j == 1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
