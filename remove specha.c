#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int i,len;
	scanf("%[^\n]s",str);
	len=strlen(str);
	for(i=0;i<len;i++)
	{
		if((str[i]>='A'&&str[i]<='Z')||(str[i]>='a'&&str[i]<='z'))
		{
			printf("%c",str[i]);
		}
	}
}
