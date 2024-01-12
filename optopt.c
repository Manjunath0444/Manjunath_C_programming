#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int getnumberlines(FILE *fp)
{
	char ch;
	rewind(fp);
	int l;
	while(1)
	{
		ch=fgetc(fp);
		if(ch==EOF)
			break;
		else
		{
			if(ch=='\n')
			{
				l++;
			}
			return l;
		}
	}
}
int getnumberwords(FILE *fp)
{
	char ch;
	rewind(fp);
	int w;
	while(1)
	{
		ch=fgetc(fp);
		if(ch==EOF)
			break;
		else
			if(ch==' '||ch=='\n')
			{
				w++;
			}
		return w;
	}
}
int getnumbercharac(FILE *fp)
{
	char ch;
	rewind(fp);
	int c;
	while(1)
	{
		ch=fgetc(fp);
		if(ch==EOF)
			break;
		else
		{
			c++;
		}
		return c;
	}
}
int main(int argc,char *argv[])
{
	printf("user defined wc command\n");
	printf("argc=%d\n",argc);
	FILE *fp;
	fp=fopen(argv[argc-1],"r");
	int lc,wc,cc;
	int opt;
	while((opt=getopt(argc,argv,"lwc")!=-1))
			{
				switch(opt)
				{
				case 'l':
				lc=getnumberlines(fp);
				printf("%d",lc);
				break;
				case 'w':
				wc=getnumberwords(fp);
				printf("%d",lc);
				break;
				case 'c':
				cc=getnumbercharac(fp);
				printf("%d",cc);
				break;

				case'?':
				printf("invalid option\n");
				break;

				default:
			        break;
				}
				printf("%s\n",argv[argc-1]);
			}

}



