//3. Write a function to compare two strings.
#include<stdio.h>
#include<string.h>
int com_of_str(char c[],char d[])
{
	int l=strcmp(c,d);
	return l;
}
int main()
{
	char a[10]="aman",b[10]="amit";
	
	printf("%d",com_of_str(a,b));
	return 0;
}

