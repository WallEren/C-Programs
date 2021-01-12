#include <stdio.h>
#include <string.h>
int main()
{
	int len,count;
	char word[100];
	
	printf ("Enter a word : ");
	gets(word);
	len = strlen(word);
	count = 0;
	for (int i=0;i<len;i++)
	{
		if (word[i]=='a' || word[i]=='e' || word[i]=='i' || word[i]=='o' || word[i]=='u' || word[i]=='A' || word[i]=='E' || word[i]=='I' || word[i]=='O' || word[i]=='U')
		{
			count+=1;
		}
	}
	printf ("Number of vowels in the word (%s) = %d",word,count);
}
