#include <cs50.h>
#include <stdbool.h>
#include <stdio.h>

int count_num(long card);
long check_sum(long card);
void card_type(long card, int size);

int main(void)
{
    long card = get_long("Enter your card number: \n");

    int size = count_num(card);

    if (size >= 13 && size <= 16)
    {
        if (check_sum(card) % 10 == 0)
        {
            card_type(card, size);
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }
}

int count_num(long card)
{
    int count = 0;
    while (card != 0)
    {
        count++;
        card /= 10;
    }
    return count;
}

long check_sum(long card)
{
    int sum1 = 0;
    int sum2 = 0;

    bool change = false;
    while (card > 0)
    {
        int digit = card % 10;
        card /= 10;

        if (change)
        {
            digit *= 2;
            sum2 += (digit / 10) + (digit % 10);
        }
        else
        {
            sum1 += digit;
        }
        change = !change;
    }
    return sum1 + sum2;
}

void card_type(long card, int size)
{
    long start_digits = card;
    while (start_digits >= 100)
    {
        start_digits /= 10;
    }

    if ((size == 15) && (start_digits == 34 || start_digits == 37))
    {
        printf("AMEX\n");
    }
    else if ((size == 16) && (start_digits >= 51 && start_digits <= 55))
    {
        printf("MASTERCARD\n");
    }
    else if ((size == 13 || size == 16) && (start_digits / 10 == 4))
    {
        printf("VISA\n");
    }
    else
    {
        printf("INVALID\n");
    }
}