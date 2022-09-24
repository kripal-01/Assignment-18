//6. Write a function to check whether a given string is an alphanumeric string or not. 
//(Alphanumeric string must contain at least one alphabet and one digit)
#include<stdio.h>
#include<string.h>
void alphanumeric(char n[]);

int main()
{
	char s1[10];
	gets(s1);
	alphanumeric(s1);
	return 0;
}
void alphanumeric(char n[])
{
	int i,j,flag=0;
int k=strlen(n);
	for(i=0;i<k;i++)
	{
		for(j=i+1;j<k;j++)
		if((((n[i]>=65&&n[i]<=90)||(n[i]>=97&&n[i]<=122))&&(n[j]>=48&&n[j]<=57))||
		(((n[j]>=65&&n[j]<=90)||(n[j]>=97&&n[j]<=122))&&(n[i]>=48&&n[i]<=57)))
		{
		flag=1;
		break;	
		}
		if(flag==1)
		{
			printf("string is alphanumeric");
				break;
		}
		

	}
	return 0;
}


