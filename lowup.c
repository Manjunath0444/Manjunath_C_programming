#include<stdio.h>
void main()
{
	char sentence[100];
	char sentence_1[100];
	printf("enter the string");
	fgets(sentence,sizeof(sentence),stdin);
	for(int i=0;sentence[i]!='\0';i++)
	{
		sentence[i]=toupper(sentence[i]);
	}
	printf("uppercase=%s\n",sentence);
	for(int i=0;sentence[i]!='\0';i++)
	{
		sentence[i]=tolower(sentence[i]);
	}
	printf("lower=%s\n",sentence);
	for(int i=0;sentence[i];i++)
	{
		if(islower(sentence[i]))
		{
			sentence[i]=toupper(sentence[i]);
		}
		else if(isupper(sentence[i]))
		{
			sentence[i]=tolower(sentence[i]);
		}
		printf("opposite string =%s\n",sentence);
	}
}

