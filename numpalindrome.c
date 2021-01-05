#include <stdio.h>

int checkpalindrome(int num)
{
	int digit, temp;
	temp = 0;
	while (num)
	{
		digit = num % 10;
		temp = temp * 10 + digit;
		num = num / 10;
	}
	return temp;
}

int main()
{
	int num, reversednum;
	printf ("Enter a number to check whether it is a palindrome or not : ");
	scanf ("%d",&num);
	reversednum = checkpalindrome(num);
	if (num == reversednum)
	{
		printf ("Yes, The given number (%d) is a palindrome",num);
	}
	else
	{
		printf ("No, The given number (%d) is not a palindrome",num);
	}
}
