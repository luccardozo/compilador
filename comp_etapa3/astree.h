#ifndef ASTREE_H
#define ASTREE_H
#include <stdio.h>
#include <string.h>
#include "hash_table.h"
#define MAX_SONS 4

#define AST_SYMBOL 1

#define AST_ADD 2
#define AST_MUL 3
#define AST_SUB 4
#define AST_DIV 5

#define AST_DECL 6
#define AST_ASS 7

#define AST_VECREAD 8

#define AST_LCMD 9
#define AST_VARDEC 10
#define AST_FUNDEC 11

#define AST_TYPEINT 12
#define AST_TYPEFLOAT 13
#define AST_TYPEBOOL 14
#define AST_TYPEBYTE 15
#define AST_TYPELONG 16
//#define AST_LDEC 17

#define AST_IF 18
#define AST_IFELSE 19
#define AST_WHILE 20
#define AST_FOR 21

#define AST_LESS 22
#define AST_GREATER 23
#define AST_LE 24
#define AST_GE 25
#define AST_NE 26
#define AST_EQ 27
#define AST_DIFF 28
#define AST_POINT 29 //Não achei pra serve isso
#define AST_OR 30

#define AST_BLOCK 31
#define AST_PRINT 32
#define AST_RETURN 33
#define AST_ARRDECL 34
#define AST_FUNCALL 35
#define AST_READ 36
#define AST_VECTORASS 37
#define AST_PAR 38
#define AST_PARLIST 39
#define AST_FUNLIST 40
#define AST_PROG 41
#define AST_REST 42
#define AST_VECLIST 43
#define AST_VECREST 44
#define AST_PRINTLIST 45
#define AST_PRINTLIST_REST 46
#define AST_PROG_VARDECL 47
#define AST_PROG_FUNCDECL 48
#define AST_VECSIZE 49
#define AST_PARENTHESIS 50

#define AST_TIL 51 //Não achei pra serve isso


FILE *out;

typedef struct astree_node
{
    int type;
    HASH_NODE *symbol;
    struct astree_node *son[MAX_SONS];
} AST;

AST *astCreate(int type, HASH_NODE *symbol, AST *s0, AST *s1, AST *s2, AST *s3);

void astPrint(AST *s0, int level);

void astDecompile(AST *s0);
#endif