#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt the user for change owed, in cents
    int cents;
    do
    {
        cents = get_int ("Change ownd (in cents): ");
    }
    while (cents < 0);
    int coins = 0;

    // Calculate how many quarters you should give customer
    coins += cents / 25;
    // Subtract the value of those quarters from cents
    cents %= 25;

    // Calculate how many dimes you should give customer
    coins += cents / 10;
    // Subtract the value of those dimes from remaining cents
    cents %= 10;

    // Calculate how many nickels you should give customer
    coins += cents / 5;
    // Subtract the value of those nickels from remaining cents
    cents %= 5;

    // Calculate how many pennies you should give customer
    coins += cents / 1;
    // Subtract the value of those pennies from remaining cents
    cents %= 1;

    // Sum the number of quarters, dimes, nickels, and pennies used
    // Print that sum
    printf("Totle coins: %i\n",coins);
}
