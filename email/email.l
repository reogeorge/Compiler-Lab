
%%

[a-zA-z0-9_]+@[a-zA-Z]+[.](com|in|edu) {printf("%s is valid email id",yytext);}
[0-9]{10} {printf("%s is a valid phone number",yytext);}
.+ {printf("%s is an invalid input",yytext);}

%%

int main()
{
	FILE *fp1;
	fp1 = fopen("input.txt","r");
	if (fp1 == NULL)
	{
		printf("error in opening file");
		return 0;
	}
	yyin = fp1;
	yylex();
	return 0;
}

int yywrap()
{
	return 1;
}
