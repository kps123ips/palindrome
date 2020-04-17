#include<stdio.h>
int main()
{
	int n,digit,rev=0,num;
	printf("Enter a number");
	scanf("%d",&n);
	num=n;
	while(n>0)
	{
		digit=n%10;
		rev=rev*10+digit;
		n=n/10;
	}
	if(num==rev)
	printf("It is a Palindrome number");
	else
	printf("It is not a Palindrome number");
	getch(0);
}
