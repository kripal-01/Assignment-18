//4. Write a function to transform string into uppercase
#include<stdio.h>
#include<string.h>
int ltu_of_str(char c[])
{
	int l=strupr(c);
	return l;
}
int main()
{
	char b[10]="Kripal";
	
	printf("%s",ltu_of_str(b));
	return 0;
}

