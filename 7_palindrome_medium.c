//7. Write a function to check whether a given string is palindrome or not.
#include<stdio.h>
#include<string.h>
void rev_of_str(char c[])
{
	int i=0,j,s=0;
	int l=strlen(c);
	j=l-1;
	while(i<=j)
	{
		if(c[i]==c[j])
		{
			i++;
		j--;	
		}
		else
		{
			break;
		}
	
	}
	if(i>j)
	printf("string is palindrome ");
	else
	printf("string is not palindrome ");
//char e[10]=strrev(c);
//	if(strrev(c)==&c[0])
//	printf("polindrome st");
//	else
//		printf("NOT polindrome st");
}
int main()
{
	char b[10]="abcdcba";
	
	rev_of_str(b);
	return 0;
}

