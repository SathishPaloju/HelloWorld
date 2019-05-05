



#include <stdio.h>
 
void swap(int*, int*); //Swap function declaration
 
int main()
{
   int First_Int, Second_Int;//variables to be swapped
 //taking input from user using scanf()
   printf("Enter the value of First_Int and Second_Int\n");
   scanf("%d%d",&First_Int,&Second_Int);
 
   printf("Before Swapping\nFirst_Int = %d\nSecond_Int = %d\n", First_Int, Second_Int);
 
   swap(&First_Int, &Second_Int);
 
   printf("After Swapping\nFirst_Int = %d\nSecond_Int = %d\n", First_Int, Second_Int);
 
   return 0;
}
//Swap function definition
void swap(int *a, int *b)
{
   int t;
 
   t  = *b;
   *b = *a;
   *a = t;
}

