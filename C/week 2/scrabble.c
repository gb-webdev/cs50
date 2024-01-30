#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

// Pseudocode:
// Input: string
// Output: printf string
// Take in the array & loop and add it up
// Sum up the totals to see who won
// Return the winner and scores

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(string word);

int main(void)
{
    // Get input words from both players
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    // Score both words
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    if (score1 > score2)
    {
        printf("Player 1 Wins!\n");
    }
    else if (score1 < score2)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }
}

int compute_score(string word)
{
    int score = 0;
    int length = strlen(word);
    for (int i = 0; i < length; i++)
    {
        char char_up = toupper(word[i]);

        if (char_up >= 'A' && char_up <= 'Z')
        {
            score += POINTS[char_up - 'A'];
        }
    }

    return score;
}