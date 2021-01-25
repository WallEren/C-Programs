#include <stdio.h>
#include <string.h>

int main()
{
	int i,j,k;
	char str1[50], str2[50], str3[50]; 
	
	scanf("%s",str1);
	scanf("%s",str2);
	
	i=0;
	j=0;
	k=0;
	
	while(str1[i]!='\0' && str2[j]!='\0')
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
	
	while(str1[i] != '\0')
	{
        	str3[k]=str1[i];
  		i++;
        	k++;
    	}

    	while(str2[j] != '\0') 
	{
        	str3[k]=str2[j];
  		j++;
        	k++;
    	}
 
	puts(str3);
}
