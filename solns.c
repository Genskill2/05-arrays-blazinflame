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
int min(int x[], int n) 
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
   int factors(int n, int x[])
  {
	  int i, j;
	  int prime = 0;
	  int c = 0;
	  int new;
 
  	for (i = 2; i <= n; i++)
   	{
     	if(n % i == 0)
        {
   			prime = 1;
			for (j = 2; j <= i/2; j++)
			{
				if(i % j == 0)
				{
					prime = 0;
					break;
				}
			} 
			if(prime == 1)
			{
				x[c] = i;
				c++;
		new = n / i;
		while(!(new % i))
		{
			x[c] = i;
			c++;
			new = new / i;
			}
			}
	
		}
   }
   printf("c is %d\n",c);
  	return c;
  }
