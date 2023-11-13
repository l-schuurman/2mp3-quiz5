#include <stdio.h> 
#include <stdlib.h>

int main() 
{ 
  // Fix ptr so that it can be correctly reallocated memory.
   int arr[2], i; 
   int *ptr = arr; 
   int *ptr_new; 
     
   arr[0] = 10;  
   arr[1] = 20;       
     
   // DO NOT CHANGE ANYTHING BELOW THIS LINE
   ptr_new = (int *)realloc(ptr, sizeof(int)*3); 
   *(ptr_new + 2) = 30; 
     
   for(i = 0; i < 3; i++) 
     printf("%d ", *(ptr_new + i)); 
  
   return 0; 
} 