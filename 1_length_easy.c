//String and Functions in C Language
//1. Write a function to calculate length of the string
#include<stdio.h>
#include<string.h>
int length_of_str(char c[])
{
	int l=strlen(c);
	return l;
}
int main()
{
	char b[10]="kripal";
	int s=length_of_str(b);
	printf("%d",s);
	return 0;
}
