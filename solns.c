/* Enter your solutions in this file */
#include <stdio.h>
//function to find the element with the maximum value in a given array//
int max(int x[],int n)
{
  int large,i;
	large=x[0];
	for(i=1;i<n;i++)
        {
		if(x[i]>large)
			large=x[i];
	}
	return(large);
  //function to find the element with the minimum value in a given array//
int max(int x[], int n) 
{
  int i, small;
  small = x[0];
  for (i = 1; i < n; i++)
  {
    if (x[i] < small)
    {
      small = x[i];
    }
  }
  return(small);
  //function to find the average of the elements in a given array//
float average(int x[], int n)
{
int i,sum = 0;
int average;
for(i=0;i < n; i++)
{
  sum = sum + x[i];
}
  average = sum / n;
  return(average);
}
  //function to find the mode of the elements in a given array//
int mode(int x[],int n)
{
   int value = 0; 
  int count = 0;
  int i, j;

   for (i = 0; i < n; i++)
   {
      int number = 0;
      
      for (j = 0; j < n; j++) 
      {
         if (x[j] == x[i])
         number++;
      }
      
      if (number > count)
      {
         count = number;
         value = x[i];
      }
   }

   return value;
}
	//function to find the prime factors of a number and input the numbers as the elements of an array//
  int factors(int num,int a[]){
  int i,acc=0;
  for(i=2;i<=num;i++){
      while(num%i==0){
        num=num/i;
        a[acc] = i;
        acc ++;
      }
  }
  return acc;
}
