/*4 3 2 1 2 3 4
    3 2 1 2 3
      2 1 2
        1
*/
#include <stdio.h>

void main()
{
    int row, column, space, eg;
    int totalcol, totalrow;

    printf("Enter number of rows : ");
    scanf("%d", &totalrow);

    totalcol = totalrow;
    for (row = 1; row <= totalrow; row++)
    {
        for (space = 1; space <= row - 1; space++)
        {
            printf("  ");
        }
        for (column = totalcol; column >= 1; column--)
        {
            printf("%d ", column);
        }
        for (eg = column + 2; eg <= totalcol; eg++)
        {
            printf("%d ", eg);
        }
        totalcol--;
        printf("\n");
    }
}
