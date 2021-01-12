#include <stdio.h>

int main()
{
	int array[100], n, i, j, temp;
  	printf("Enter number of elements in array : ");
    	scanf("%d", &n);
 	printf("Enter %d integers\n", n);

    	for (i = 0; i < n; i++)
   	{
    		scanf("%d", &array[i]);
	}
  	i=0;
  	j=n-1;
  	while(i<j)
    	{
      		temp=array[i];
      		array[i]=array[j];
      		array[j]=temp;
      		i++;
      		j--;
    	}
  
    	printf("The Reverse Array \n");
    
    	for (i = 0; i<n; i++)
    	{
      		printf("%d", array[i]);
  	}
}
