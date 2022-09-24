//10. Write a function to find the repeated character in a given string.

#include<stdio.h>
void rep(char b[])
{
	int i,j,c,k;
	for(i=0;b[i];i++)
	{
		
		for(j=i+1;b[j];j++)
		{
			if(b[i]==b[j])
			printf("repeated character is %c\n\n",b[i]);
		}
		
	}
}
int main()
{
	char a[20];
	gets(a);
	rep(a);
	return 0;
}
