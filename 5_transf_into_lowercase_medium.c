//5. Write a function to transform string into lowercase
#include<stdio.h>
#include<string.h>
int utl_of_str(char c[])
{
	int l=strlwr(c);
	return l;
}
int main()
{
	char b[10]="KRIpal";
	
	printf("%s",utl_of_str(b));
	return 0;
}

