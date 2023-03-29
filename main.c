#include <stdio.h>
#include <stdlib.h>

//printing user's input in arrays

int main(void) 
{
int a[5], i;
  int b[5];
  
  printf("Welcome User\nPlease enter the elements of the first array:\n");
  
  for (i = 0; i < 5; i++)
    scanf("%d", &a[i]);
  system("clear");

  printf("Please enter the elements of the second array:\n");
  
  for (i = 0; i < 5; i++)
    scanf("%d", &b[i]);
  system("clear");

  for (i = 0; i < 5; i++)
    printf("\nArray of first elements at index %d is: %d\n", i, a[i]);

  printf("\n");

  for (i = 0; i < 5; i++)
    printf("\nArray of second elements at index %d is: %d\n", i, b[i]);

  printf("\n\nEnd of Program\n\n");
  sleep(10);
  system("clear");
  printf("Welcome User");
  
  return 0;
}