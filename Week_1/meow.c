#include <cs50.h>
#include <stdio.h>


// int main (void)
// {
//     int i = 0;
//     while (i < 3)
//     {
//         printf ("meow\n");
//         i++;
//     }
// }


// int main (void)
// {
//     for (int i = 0; i < 3; i++)
//     {
//         printf("meow\n");
//     }
// }


// void meow(void)
// {
//     printf ("meow\n");
// }

// int main (void)
// {
//     for (int i = 0; i < 3; i++)
//     {
//         meow();
//     }
// }


void meow (int n)
{
    for (int i = 0; i < n; i++)
    {
        printf ("meow\n");
    }
}

int main (void)
{
    meow(3);
}
