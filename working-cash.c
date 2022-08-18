#include <cs50.h>
#include <stdio.h>

int get_cents(void);
int calculate_quarters();
int calculate_dimes();
int calculate_nickels();
int calculate_pennies();
int cents;
int quarters;
int dimes;
int nickels;
int pennies;
int main(void)
{
    // Ask how many cents the customer is owed
    do
    {
        get_cents();
    }
    while (cents < 0);

    // Calculate the number of quarters to give the customer
    quarters = calculate_quarters();

    // Calculate the number of dimes to give the customer
    dimes = calculate_dimes();

    // Calculate the number of nickels to give the customer
    nickels = calculate_nickels();

    // Calculate the number of pennies to give the customer
    pennies = calculate_pennies();

    // Sum coins
    int coins = quarters + dimes + nickels + pennies;


    // Print total number of coins to give the customer
    printf("%i\n", coins);
}

int get_cents(void)
{
    cents = get_int("Enter the number of cents: ");
    return cents;
}

int calculate_quarters()
{
    quarters = 0;
    while (cents >= 25)
    {
        quarters++;
        cents = cents - 25;
    }
    return quarters;
}

int calculate_dimes()
{
    dimes = 0;
    while (cents >= 10)
    {
        dimes++;
        cents = cents - 10;
    }
    return dimes;
}

int calculate_nickels()
{
    nickels = 0;
    while(cents >= 5)
    {
        nickels++;
        cents = cents - 5;
    }
    return nickels;
}

int calculate_pennies()
{
    while (cents >= 1)
    {
       pennies++;
       cents = cents - 1;
    }
    return pennies;
}
