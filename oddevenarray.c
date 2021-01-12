#include <stdio.h>

int main()
{
	int numarr[100], odd[100], even[100];
	int n,i,j,k;
	
	printf("Elements :");
    scanf("%d",&n);
   
    printf("Input %d elements in the array :\n",n);
    for(i=0;i<n;i++)
    {
	    scanf("%d",&numarr[i]);
	}
	
	j=0;
	k=0;
	for (i=0;i<n;i++)
	{
		if(numarr[i]%2==0)
		{
			even[j]=numarr[i];
			j++;
		}
		else
		{
			odd[k]=numarr[i];
			k++;
		}
	}
	
	printf ("\nThe Even numbers are ");
	
	for (i=0;i<j;i++)
	{
		printf("%d",even[i]);
	}
	
	printf ("\nThe Odd numbers are ");
	
	for (i=0;i<k;i++)
	{
		printf("%d",odd[i]);
	}
}
