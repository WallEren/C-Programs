#include<stdio.h>
#include <string.h>

int main()
{
	int i, j, k, count, len;
	char word[100], unique[100] = {0};
	printf("Enter any word : ");
	gets(word);
	
	len=strlen(word);
	k=0;
	
	for (i=0;i<len;i++)
	{
		count=0;
		for (j=0;j<i;j++)
		{
			if(word[i]==unique[j])
			{
				count++;
			}
		}
		if(count==0)
		{
			unique[k]=word[i];
			k++;
		}
	}
	
	printf("The Unique Word is ");
	puts(unique);
}
