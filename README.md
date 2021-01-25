# C program to check whether given string is accepted by the grammar or not.

## Header files included:
* stdio.h- for input and output functions (scanf, printf, gets)
* string.h- consists of functions to manipuate array of characters

## Concepts used:
* functions
* if-else control statement
* for loop

## Grammar used:
S-> aSa|bSb|c

## Logic used:
The given grammar will accept strings satisfying the followwing conditions:
* If length of the string is 1 and string='c', it will be accepted.
* For length greater than 1,
  -Total length of the string has to be an odd number.
  -String can either start and end with 'a' or start and end with 'b'.
  -Count of 'a' and 'b' in the string has to be even.
  -The character at the centre of the string has to be 'c'.
* Else string not accepted.

Count function is used to count the number of 'a' and 'b' in the string.
