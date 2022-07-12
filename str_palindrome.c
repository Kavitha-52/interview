#include<stdio.h>
int main()
{
	char str[10];
	printf("enter a string:\n");
	scanf("%s",str);
	int i=0,j=0;
	while(str[j]!='\0')
	{
		j++;
	}
	j=j-1;
	while(i<j)
	{
		if(str[i]!=str[j])
		{
			break;
		}
		i++;
		j--;
	}
	if(i>=j)
		printf("string is palindrome\n");
	else
		printf("the string is not palindrome\n");


}
		
