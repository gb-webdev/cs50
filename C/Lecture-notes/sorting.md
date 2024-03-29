Sorting can happen in a verity of ways in C

Selection sort works in a linear way, finding the smallest number in an entire array,
then swappping it with the first index.
It keeps going in order iterating through the whole array again and again (miinus the already sorted numbers),
until complete, it would look like this in logic:

For i from 0 to n-1
  Find the smallest number between numbers[i] and numbers [n-1]
  Swap smallest number with numbers[i]

The amount of steps this would take to sort is equevelant to n squared. Not very efficient.

n(n -1) /2
O(n2) (n squared) (see algorithms.md)

Bubble sort iterates through the whole array swapping numbers if they aren't in order,
this allows the biggest numbers to 'bubble' their way to the top of the array.
This loops through until it completes a cycle of iteration with no changes, then it stops.
It would look liike this in logic:

Repeat n-1 times
For i from 0 to n-2
  If numbers[i] and numbers[i+1] out of order, swap them
If no swaps, quit

The amount of steps this also takes is eqivelant to n squared, also not efficient
However if the array is already sorted, it can quit early with that simple if statement.
This gives it an advantage over selection sort in those cases O(n)  (see algorithms).

(n - 1) * (n - 1)
O(n2) (n squared)


Merge Sort keeps halving the sort (simiilar to the phone book).
It will move all the way to 1 number recursively, search the left half of 1 number.
Moving accross and putting the sorted numbers into a new array.
This costs more space but is faster than bubble sort and selection sort.
The logic would look like this:

If only one number
  Quit
Else
  Sort left half of numbers
  Sort right half of numbers
  Merge sorted halves

  The steps this takes is n log n

O(n log n)