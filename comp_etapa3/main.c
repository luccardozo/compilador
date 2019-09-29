// Victor de Almeida Piccoli Ferreira
// Lucas Cardoso Tavares
#include <stdio.h>
#include <stdlib.h>
#include "hash_table.h"
#include "astree.h"
#include "lex.yy.h"
#include "y.tab.h"

//#include "tokens.h"

extern int isRunning(void);
extern void initMe(void);
extern int getLineNumber();


int main(int argc, char **argv)
{
    if (argc != 2)
    {
        printf("O nome do arquivo precisa ser especificado!\n");
        exit(1);
    }

    FILE *file;
    
    if (!(file = fopen(argv[1], "r")))
    {
        printf("Erro ao abrir arquivo, ERROR2");
        exit(2);
    }
        if (!(out = fopen(argv[2],"w"))) 
    {
        printf("Erro ao abrir arquivo, ERROR2");
        exit(2);
    }

    yyin = file;
    initMe();

    yyparse();

    fprintf(stderr, "Sucesso!\n");

    //hashPrint();
    fclose(out);
    exit(0);

    return 0;
}
