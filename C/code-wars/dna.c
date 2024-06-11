// Deoxyribonucleic acid (DNA) is a chemical found in the nucleus of cells.
// It carries the "instructions" for the development and functioning of living organisms.

// If you want to know more: http://en.wikipedia.org/wiki/DNA

// In DNA strings, symbols "A" and "T" are complements of each other, as "C" and "G".
// Your function receives one side of the DNA (string, except for Haskell); you need to return the other complementary side.
// DNA strand is never empty or there is no DNA at all (again, except for Haskell).

// More similar exercise are found here: http://rosalind.info/problems/list-view/ (source)

// Example: (input --> output)

// "ATTGC" --> "TAACG"
// "GTAT" --> "CATA"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *dna_strand(const char *dna)
{
    int length = strlen(dna);
    char *new_char = malloc(length + 1);
    for (int i = 0; i < length; i++)
      {
        if (dna[i] == 'A')
          {
            new_char[i] = 'T';
          }
        else if (dna[i] == 'T')
          {
            new_char[i] = 'A';
          }
        else if (dna[i] == 'G')
          {
            new_char[i] = 'C';
          }
        else if (dna[i] == 'C')
          {
            new_char[i] = 'G';
          }
        else 
          {
            new_char[i] = dna[i];
          }
      }
  new_char[length] = '\0';
  
  return new_char;
}