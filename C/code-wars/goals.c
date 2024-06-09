#include <stdio.h>

// Messi is a soccer player with goals in three leagues:
// LaLiga
// Copa del Rey
// Champions
// Complete the function to return his total number of goals in all three leagues.

Note: the input will always be valid.

int goals(int laLigaGoals, int copaDelReyGoals, int championsLeagueGoals) {
  
  int sum = laLigaGoals + copaDelReyGoals + championsLeagueGoals;
  
  return sum;
}