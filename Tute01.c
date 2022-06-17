/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main(void) {
  int mark1,mark2;
  int sum;
  float average;

  printf("Enter Mark:"); // Enter Mark
  scanf("%d",&mark1); // Read Value Of mark 1

  printf("Enter Mark:"); // Enter Mark
  scanf("%d",&mark2); // Read Value of Mark 2

  sum=mark1+mark2;// Calculate sum

  average=sum/2;//Calculate Average

  printf("Average is %.2f\n",average);//Display average average

  
  return 0;
}                      // End of Main fuction

