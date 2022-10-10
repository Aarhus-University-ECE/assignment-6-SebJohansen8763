#include <stdio.h>
#include <assert.h>

int max(int* numbers, int size)
{
assert(size>0);

int maxvalue = numbers[0]; // gemmer størsteværdien i array på første plads i arrayet.

   for (int i = 1; i < size; i++) {// loop der tjekker største værdien i et array
        if (numbers[i] > maxvalue)
        
            maxvalue = numbers[i];
   }
    return maxvalue;
}
