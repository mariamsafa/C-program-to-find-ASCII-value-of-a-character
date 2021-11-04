#include<stdio.h>
int main()
{
	char c;
	printf_s("Enter a character:");
	scanf_s("%c", &c,1);
	printf_s("ASCII value of %c=%d\n", c, c);
	return 0;

}