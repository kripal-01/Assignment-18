//8. Write a function to count words in a given string
#include<stdio.h>
int word_count(char b[]);

int word_count(char b[])
{
	int i,c=1;
	for(i=0;b[i];i++)
	{
		if(b[i]==32)
		c++;
	}
	return c;
}
int main()
{
	char a[50];
	gets(a);
int l=	word_count(a);
	printf("total no. of words are %d",l);
	return 0;
}

