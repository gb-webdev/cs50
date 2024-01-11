#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int score1 = 72;
    int score2 =73;
    int score3 = 33;

    printf("Average %f\n", (score1 + score2 + score3) / 3.0); // = 59.33
}

// Here we have 3 scores, granted there is only 3 scores and it's only taking up 12 bytes
// But on a larger scale, it is very wasteful for storing data

// The best way to store large numbers like this is with an Array in belows example

int main(void)
{
    int scores[3];
    scores[0] = 72;
    scores[1] = 73;
    scores[2] = 33;

    printf("Average %f\n", (scores[0] + scores[1] + scores[2]) / (float) 3);
}

// Ask for user input on how to add the scores by incorporating a loop

int main(void)
{
    int scores[3];
    for (int i = 0; i < 3; i++)
    {
        scores[i] = get_int("score: ");
    }

    printf("Average %f\n", (scores[0] + scores[1] + scores[2]) / (float) 3);
}

// This is a much better way of storing the data than any example above. Here the memory is contiguous ad in 1 variable.
// Although it is still 12 bytes

const int N = 3;

float average(int array[]); // for passing array as an argument

int main(void)
{
    int scores[N];
    for (int i = 0; i < N; i++)
    {
        scores[i] = get_int("score: ");
    }

    printf("Average %f\n", average(scores));
}

float average(int array[]) // How to tell a function to take in an array (empty square brackets)
{
    int sum = 0; //initialize the var
    for (int i = 0; i < N; i++)
    {                          // In the loop we keep adding to sum.
        sum += array[i];  // Which was initially 0, adding the next index as we iterate.
    }    // + sum array[i] >>>> originally this, but changed for syntactical sugar
    return sum / (float) N; // This gives us the total sum which we return, divided by the dynamic index.
}

// you can also add the length argument in float average for best practice for people who view and work with your code.

// IN C YOU MUST REMEMBER YOUR ARRAY LENGTH AS THERE ISN'T A FUNCTION THAT DOES IT FOR YOU
// IN THIS CASE IT WILL BE CHANGED IN THE 'N' CONST VAR

// Arrays can be passed around as arguments 