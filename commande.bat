flex lexicale.l
bison -d syntaxe.y
gcc lex.yy.c syntaxe.tab.c  ts.c -lfl -ly -o comp