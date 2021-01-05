#include <stdio.h>

int ispalindrome(int num)
{
	int digit, temp, check;
	check = num;
	temp = 0;
	while (num)
	{
		digit = num % 10;
		temp = temp * 10 + digit;
		num = num / 10;
	}
	if (check == temp)
	{
		printf ("The Palindrome is %d",check);
		return 1;
	}
}

int main()
{
	int num, i;
	printf ("Enter any number to print the next palindrome number for the given number : ");
	scanf ("%d",&num);
	while(ispalindrome(num)!=1)
	{
		num++;
	}
}
