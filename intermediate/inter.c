#include<stdio.h>
#include<string.h>

char op[2],arg1[5],arg2[5],result[5];

int main()
{
	FILE *fp1,*fp2;
	fp1 = fopen("input.txt","r");
	fp2 = fopen("output.txt","w");
	while(!feof(fp1))
	{
		fscanf(fp1,"%s%s%s%s",op,arg1,arg2,result);
		switch(op[0])
		{
			case '+':
					fprintf(fp2,"\nMOVE R0,%s",arg1);
					fprintf(fp2,"\nADD R0,%s",arg2);
					fprintf(fp2,"\nMOVE %s,R0",result);
					fprintf(fp2,"\n");
					break;
			case '-':
					fprintf(fp2,"\nMOVE R0,%s",arg1);
					fprintf(fp2,"\nSUB R0,%s",arg2);
					fprintf(fp2,"\nMOVE %s,R0",result);
					fprintf(fp2,"\n");
					break;
			case '*':
					fprintf(fp2,"\nMOVE R0,%s",arg1);
					fprintf(fp2,"\nMUL R0,%s",arg2);
					fprintf(fp2,"\nMOVE %s,R0",result);
					fprintf(fp2,"\n");
					break;
			case '/':
					fprintf(fp2,"\nMOVE R0,%s",arg1);
					fprintf(fp2,"\nDIV R0,%s",arg2);
					fprintf(fp2,"\nMOVE %s,R0",result);
					fprintf(fp2,"\n");
					break;
			case '=':
					fprintf(fp2,"\nMOVE R0,%s",arg1);
					fprintf(fp2,"\nMOVE %s,R0",result);
					fprintf(fp2,"\n");
					break;
			default:
					fprintf(stderr,"aaaaaaa");
					break;
		}
	}
	fclose(fp1);
	fclose(fp2);
}
