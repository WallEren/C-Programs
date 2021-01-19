#include <stdio.h>
#include <string.h>

int main()
{
	int i,j,k;
	char str1[50]={'A','P','Z'};
	char str2[50]={'C','G','Y'};
	char str3[50]={0};
	
	i=0;
	j=0;
	k=0;
	
	while(str1[i]!='\0')
	{
		if (str1[i]<=str2[j])
		{
			str3[k]=str1[i];
			i++;
		}
		else
		{
			str3[k]=str2[j];
			j++;
		}
		k++;
	}
	
	puts(str3);
}
