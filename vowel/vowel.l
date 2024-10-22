%{ 
int vow_count = 0;
int const_count = 0;

%}

%%

[aeiouAEIOU] {vow_count++;}
. {const_count++;}

%%

int main()
{
	printf("enter your string");
	yylex();
	printf("vowels: %d\nconsonants: %d",vow_count,const_count);
	return 0;
}

int yywrap()
{
	return 1;
}
