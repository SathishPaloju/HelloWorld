



#include <stdio.h>
 
void swap(int*, int*); //Swap function declaration
 
int main()
{
   int first_int, second_int;//variables to be swapped
 //taking input from user using scanf()
   printf("Enter the value of First_Int and Second_Int\n");
   scanf("%d%d",&first_int,&second_int);
 
   printf("Before Swapping\nFirst_Int = %d\nSecond_Int = %d\n", first_int, second_int);
 
   swap(&first_int, &second_int);
 
   printf("After Swapping\nFirst_Int = %d\nSecond_Int = %d\n", first_Int, second_Int);
 
   return 0;
}
//Swap function definition
void swap(int *first_int, int *second_int)
{
   int temp;
 
   temp = *first_int;
   *first_int = *first_int;
   *first_int = temp;
}

