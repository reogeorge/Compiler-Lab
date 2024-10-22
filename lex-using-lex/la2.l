{%
comment = 0;
%}

id [a-zA-z][a-zA-Z0-9]*

%%

#.* {printf("\n%s is a preprocessor directive",yytext);}
int | char | double | while | if | for | struct | typedef | do | void | return
{ printf("\n %s is a keyword",yytext);}

{id}\( {printf("\nfunction %s",yytext);}
\{ {printf("\n BLOCK BEGINS");}
\} {printf("\n BLOCK ENDS");}

{id} (\[[0-9]*\])? {printf("\n %s is an identifier",yytext);}

\; {}

[0-9]+ {printf("\n %s is a number ",yytext);}

\+ | \- | \* | \/ | \% 
{printf("\n %s is an operator");}



 
