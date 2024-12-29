#include <cs50.h>
#include <stdio.h>


// int main (void)
// {
//     int x = get_int("x :  ");
//     int y = get_int("y :  ");

//     printf("%i\n", x+y);
// }


int add (int a, int b)
{
    return a + b;
}

int main (void)
{
    int x = get_int("x :  ");
    int y = get_int("y :  ");

    // int z = add(x, y);
    printf("%i\n", add(x, y));
}
