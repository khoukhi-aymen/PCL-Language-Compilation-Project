%{
#include <stdio.h> 
#include <string.h>
#include "syntaxe.tab.h"
#include"ts.h"
extern nb_ligne;
extern col;
extern YYSTYPE yylval;
char val_s_par[10]="";
char b[10]="";

char e[]="(";
int i;
int j ;
// printf(" %s  ",yytext);
%}
%option yylineno

IDF [A-Za-z]([a-z0-9])*
entier  ([1-9][0-9]*|0)|(\(-[1-9][0-9]*\)) 
reel  ([0-9]+\.[0-9]+)|(\(-[0-9]+\.[0-9]+\))
commentaire "%%"(.)*

space ("\t"|" ")+
saut "\n"+               

%%

"VAR"        { printf(" %s  ",yytext);col =col+yyleng; rechercher(yytext,"Mot cle",0,0, 1); return mc_var;}  

"CODE"       { printf(" %s  ",yytext); col =col+yyleng; rechercher(yytext,"Mot cle",0,0, 1); return mc_code ;}  

"CONST"      {printf(" %s  ",yytext);col =col+yyleng;  rechercher(yytext,"Mot cle",0,0, 1); return mc_const;}

"INTEGAR"    {printf(" %s  ",yytext);col =col+yyleng; rechercher(yytext,"Mot cle",0,0, 1);  return mc_int;}

"FLOAT"      {printf(" %s  ",yytext); col =col+yyleng; rechercher(yytext,"Mot cle",0,0, 1);  return mc_flt ;}

"STRUCT"     {printf(" %s  ",yytext); col =col+yyleng; rechercher(yytext,"Mot cle",0,0, 1); return mc_struct;}


"*"          {printf(" %s  ",yytext); col =col+yyleng; rechercher(yytext,"Mot cle",0,0,2); return fois ; }
"+"          {printf(" %s  ",yytext); col =col+yyleng; rechercher(yytext,"Mot cle",0,0,2); return plus ; }
"-"          {printf(" %s  ",yytext); col =col+yyleng; rechercher(yytext,"Mot cle",0,0,2); return moins ; }
"/"          {printf(" %s  ",yytext); col =col+yyleng; rechercher(yytext,"Mot cle",0,0,2); return slash ; }
"("          {printf(" %s  ",yytext); col =col+yyleng; rechercher(yytext,"Mot cle",0,0,2); return par_o ; }
")"          {printf(" %s  ",yytext); col =col+yyleng; rechercher(yytext,"Mot cle",0,0,2); return par_f ; }
"&&"         {printf(" %s  ",yytext); col =col+yyleng; rechercher(yytext,"Mot cle",0,0, 1); return mc_and ;}
"||"         {printf(" %s  ",yytext); col =col+yyleng; rechercher(yytext,"Mot cle",0,0, 1); return mc_or ; }
"!"          {printf(" %s  ",yytext); col =col+yyleng; rechercher(yytext,"Mot cle",0,0, 1); return mc_not; }
">"          {printf(" %s  ",yytext); col =col+yyleng; rechercher(yytext,"Mot cle",0,0, 1); return mc_sup; }
"<"          {printf(" %s  ",yytext); col =col+yyleng; rechercher(yytext,"Mot cle",0,0, 1); return mc_inf; }
">="         {printf(" %s  ",yytext); col =col+yyleng; rechercher(yytext,"Mot cle",0,0, 1); return mc_supe; }
"<="         {printf(" %s  ",yytext); col =col+yyleng; rechercher(yytext,"Mot cle",0,0, 1); return mc_infe; }
"=="         {printf(" %s  ",yytext); col =col+yyleng; rechercher(yytext,"Mot cle",0,0, 1); return mc_egale; }
"!="         {printf(" %s  ",yytext); col =col+yyleng; rechercher(yytext,"Mot cle",0,0, 1); return mc_dif; }
"="          {printf(" %s  ",yytext); col =col+yyleng; rechercher(yytext,"Mot cle",0,0, 1); return mc_aff; }




"|"           { printf(" %s  ",yytext); col =col+yyleng; rechercher(yytext,"Mot cle",0,0,2); return sep_var; }

":"           {printf(" %s  ",yytext); col =col+yyleng;  rechercher(yytext,"Mot cle",0,0,2); return dept; }

"{"           {printf(" %s  ",yytext); col =col+yyleng;  rechercher(yytext,"Mot cle",0,0,2); return cro_o;}

"}"           {printf(" %s  ",yytext); col =col+yyleng;  rechercher(yytext,"Mot cle",0,0,2); return  cro_f;}

","           {printf(" %s  ",yytext); col =col+yyleng;  rechercher(yytext,"Mot cle",0,0,2); return  vrgl;}

"["           {printf(" %s  ",yytext); col =col+yyleng; rechercher(yytext,"Mot cle",0,0,2);  return  aco_o;}

"]"           {printf(" %s  ",yytext); col =col+yyleng; rechercher(yytext,"Mot cle",0,0,2);  return  aco_f;}

";"           {printf(" %s  ",yytext); col =col+yyleng; rechercher(yytext,"Mot cle",0,0,2); return  pointvrgl;}

"."           {printf(" %s  ",yytext); col =col+yyleng; rechercher(yytext,"Mot cle",0,0,2); return  point;}


"IF"      { printf(" %s  ",yytext);    col =col+yyleng; rechercher(yytext,"Mot cle",0,0, 1);  return mc_if; }
"ELSE"    { printf(" %s  ",yytext);  col =col+yyleng;  rechercher(yytext,"Mot cle",0,0, 1); return mc_else; }
"FOR"     { printf(" %s  ",yytext); col =col+yyleng;   rechercher(yytext,"Mot cle",0,0, 1); return mc_for; }
"WHILE"   { printf(" %s  ",yytext); col =col+yyleng;   rechercher(yytext,"Mot cle",0,0, 1); return mc_while; }


{IDF}        {if(yyleng > 8){   printf("dépassment de longeur \n");}
                                else{printf(" %s  ",yytext); col =col+yyleng;  yylval.str=strdup(yytext);  return idf ;}
             }
			 
			 
{entier}     { printf(" %s  ",yytext); col =col+yyleng;  

if( strncmp(yytext,e,1) == 0){ // pour indiquer s'il ya une "(" au debut de la consatante 
       j=0;
           for(i=1; i<(strlen(yytext)-1);i++)
	       {  
		      val_s_par[j]=yytext[i];   
                    
		      j++;
	       }   
           
           
          
                
		
     	  if( abs(atoi(val_s_par)) > 32767 ) {printf("%s erreur \n",yytext); } // abs pour calculer la valeur absolue d'un nombre
             else{   
                        yylval.integer=atoi(val_s_par);   return entier ;
                 }
		  
		  }else{
          
       if( abs(atoi(yytext)) > 32767 ) {printf("%s erreur \n",yytext); }
             else{    
                    yylval.integer=atoi(yytext);  return entier;

                 } }


}

{reel}        {printf(" %s  ",yytext); col =col+yyleng;  yylval.f=atof(yytext);

                          j=0;
           if( strncmp(yytext,e,1)==0){ 
	     for(i=1;i<(strlen(yytext)-1);i++)
	         {
		      b[j]=yytext[i];
		      j++;
	         }   j=0;
		   yylval.f=atof(b);
		  } else{  

                  yylval.f=atof(yytext);
		  }
		  
          return reel ;
 }


{space} {col =col+yyleng;  }
{saut}  {  col=1 ;  nb_ligne=nb_ligne+yyleng; printf("\n");}
{commentaire}  {printf("%s\n",yytext);}

.  {printf ("\t \t Entité lexicale %s non reconnue a ligne %d \n",yytext,yylineno); return err;}



