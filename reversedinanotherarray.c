#include <stdio.h>

int main()
{
	  int n, i, j;
  	printf("Enter number of elements in array : ");
    scanf("%d", &n);
    int array1[n], array2[n];
 	  printf("Enter %d integers\n", n);

    for (i = 0; i < n; i++)
    {
    	  scanf("%d", &array1[i]);
	  }
  	  i=0;
  	  j=n-1;
  	  while(i<n)
      {
      	  array2[j]=array1[i];
      	  i++;
      	  j--;
      }
  
      printf("The Reverse Array \n");
    
      for (i = 0; i<n; i++)
      {
      	  printf("%d", array2[i]);
  	  }
}
