#iniclude <stdio.h>

// Your function takes two arguments:

// current father's age (years)
// current age of his son (years)
// Сalculate how many years ago the father was twice as old as his son.
// Or in how many years he will be twice as old.
// The answer is always greater or equal to 0, no matter if it was in the past or it is in the future.

int twice_as_old (int father_age, int son_age)
{
  if (son_age * 2 < father_age)
    {
      return father_age - (son_age * 2);
    }
  else if ( son_age * 2 > father_age)
    {
      return (son_age * 2) - father_age;
    }
  else
    {
    return 0;
    }
  return 0;
}