//2. Write a function to reverse a string.
#include<stdio.h>
#include<string.h>
int rev_of_str(char c[])
{
	int l=strrev(c);
	return l;
}
int main()
{
	char b[10]="kripal";
	
	printf("%s",rev_of_str(b));
	return 0;
}

