#include <cs50.h>
#include <studio.h>

int main(void)
{
    char c = get_char("Do you agree? ");

    if (c == 'y' || c == 'Y' || c == "yes" || "Yes")
    {
        printf("agreed.\n");
    }
    else if (c == 'n' || c == 'N' || c == "no" || c == "No")
    {
        printf("Not agreed.\n");
    }
}