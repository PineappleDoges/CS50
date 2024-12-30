#include <cs50.h>
#include <stdio.h>

int main (void)
{
    int n;
    // Prompt users for a positive integer
    do
    {
        n = get_int("Size: ");
    }
    while (n < 1);

    // Print a right-aligned triangle
    for (int i = 0; i < n; i++)
    {
        // Print spaces
        for (int j = 0; j < n - i - 1; j++)
        {
            printf(" ");
        }
        // Print hashes
        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }
        // Move to the next line
        printf("\n");
    }
}
