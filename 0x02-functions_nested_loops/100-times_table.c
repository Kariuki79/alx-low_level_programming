#include "main.h"

/**
 * print_times_table_row - prints a single row of the times table
 * @n: the number for the times table
 * @row: the row number to print
 */
void print_times_table_rmow(int n, int row)
{
    int b, c;

    for (b = 0; b <= n; b++)
    {
        c = b * row;
        if (b == 0)
        {
            _putchar(c + '0');
        }
        else
        {
            _putchar(',');
            _putchar(' ');
            if (c < 10)
            {
                _putchar(' ');
                _putchar(' ');
            }
            if (c < 100)
            {
                _putchar(' ');
            }
            _putchar((c / 100) + '0');
            _putchar(((c / 10) % 10) + '0');
            _putchar((c % 10) + '0');
        }
    }
}
  
