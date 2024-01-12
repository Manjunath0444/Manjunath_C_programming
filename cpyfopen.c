#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fsrc,*fdst;clude<stdio.h>
#include<stdlib.h>
int main()
{
        FILE *fsrc,*fdst; char ch;
        fsrc=fopen("file1","r");
        if(fsrc==NULL)
        {
                printf("source file is not present\n");
                printf("copy not possible");
             char ch;
	fsrc=fopen("file1","r");
	if(fsrc==NULL)
	{
		printf("source file is not present\n");
		printf("copy not possible");
		exit(0);
	}
	else 
	{
		fdst=fopen("file2","w");
		while(1)
		{
			ch=fgetc(fsrc);
			if(feof(fsrc))
				break;
			else
				fputc(ch,fdst);
		}
		printf("file copied successfully");
		fclose(fsrc);
		fclose(fdst);
	}
}

