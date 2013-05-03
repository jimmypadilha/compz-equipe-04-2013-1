%{
/* Exemplo de uso do Flex */
%}
EMAIL  [a-z][\_\-"."a-z0-9]*[@][a-z]+[a-z0-9]*"."[a-z]+("."[a-z]+)?

%%
{EMAIL}  printf("email aceito: \"%s\"\n", yytext);
.*       printf("nao aceito: \"%s\"\n", yytext);
%%
main(int argc, char *argv[])
{
  if (argc < 2)
  {
    printf ("Missing input file\n");exit(-1);
  }
  yyin = fopen(argv[1], "r" );
  yylex();
}

