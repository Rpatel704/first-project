#include <stdio.h>

int main() {
    int rows, cols, i, j, column;
    float table[50][50], max;

    printf("Enter number of rows: ");                                       
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    printf("\nEnter the table values (like rows in SQL table):\n");         
    for (i = 0; i < rows; i++) {
        printf("Row %d:\n", i + 1);
        for (j = 0; j < cols; j++) {
            scanf("%f", &table[i][j]);
        }
    }

    printf("\nEnter column number to find MAX (1 to %d): ", cols);          
    scanf("%d", &column);

    max = table[0][column - 1];

    for (i = 1; i < rows; i++) {                                            
        if (table[i][column - 1] > max) {
            max = table[i][column - 1];
        }
    }

    printf("\nSQL MAX(Column %d) = %.2f\n", column, max);

    return 0;
}
