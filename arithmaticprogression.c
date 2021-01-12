#include <stdio.h>

int main()
{
	int ap[100], start, difference, length;
	
	printf ("Enter start : ");
	scanf ("%d",&start);
	printf ("Enter difference : ");
	scanf ("%d",&difference);
	printf ("Enter length : ");
	scanf ("%d",&length);
	
	for(int i=0;i<length;i++)
	{
		ap[i] = start;
		start = start + difference;
	}
	
	printf ("The Arithmatic Progression is ");
	
	for(int i=0;i<length;i++)
	{
		printf("%d,",ap[i]);
	}
}
