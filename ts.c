#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "ts.h"
          
void init ()
{
    int i;
    for ( i = 0; i < taille ; i++)
    {
            tess[i]=NULL;
    }
    
}

int fhach (char* e)
{
    int i=0, count=0;
    while (e[i]!='\0')
    {
        count+=e[i]*i*(10*(i+1));
        i++;
    }
    return (count%taille);
    
}

void inserer(char* e1,int type, int taill , int valc )
{ 
    int index;
    elem* p;
    elem* adr;
    int b=recherche(e1,&index,&adr);
    if(b==0)
    p=malloc(sizeof(elem));
    p->nom=e1;
    p->type=type;
    p->taille_tab = taill; 
    p->isconst=valc; 
    p->valeur=0;
    if(tess[index]==NULL){
        p->svt=NULL;
        tess[index]=p;
        }else {p->svt = tess[index];
        tess[index]=p;
    }
}


void inserer_cst(char* e1,int type, int taill , int valc ,float valeur)
{ 
    int index;
    elem* p;
    elem* adr;
    int b=recherche(e1,&index,&adr);
    if(b==0)
    p=malloc(sizeof(elem));
    p->nom=e1;
    p->type=type;
    p->taille_tab = taill; 
    p->isconst=valc; 
    p->valeur=valeur;
    if(tess[index]==NULL){
        p->svt=NULL;
        tess[index]=p;
        }else {p->svt =tess[index];
        tess[index]=p;
    }
}

int recherche(char* e1,int* index,elem** adr)
{
    elem* p;
    *index =fhach(e1);
    p=tess[*index];
    *adr=p; 
    if(p==NULL) return 0;
    
    while (p!=NULL && strcmp(p->nom,e1)!=0) 
    {
        p=p->svt;
        *adr=p;
    }

    if(p==NULL) return 0;
    return 1;
}

int recherche_cst(char* e1,int* index,elem** adr)
{
    elem* p;
    *index =fhach(e1);
    p=tess[*index];
    *adr=p; 
    if(p==NULL) return 0;
    
    while (p!=NULL && strcmp(p->nom,e1)!=0) 
    {
        p=p->svt;
        *adr=p;
    }

    if(p==NULL){ return 0;}
	            
		   else{
			   if(p->isconst==0){ return 0;}
			                   else  //c-a-d ts[pos] est une constant
							   {
			                   if(p->valeur == 0) {
		                                 return -1; //la constant n'a pas une valeur
	                            }
	                            else {return 1;} // la constant a une valeur
                                }
    
}
}

int CONST_VALEUR(char* e1){
    int index;
    elem* p;
    elem* adr;
    int b=recherche_cst(e1,&index,&adr);
	return b;
}

float return_val_idf(char* e1,int* index,elem** adr){
    elem* p;
    *index =fhach(e1);
    p=tess[*index];
    *adr=p; 
    if(p==NULL) return 0;
    
    while (p!=NULL && strcmp(p->nom,e1)!=0) 
    {
        p=p->svt;
        *adr=p;
    }

    if(p==NULL) return 0;
    return p->valeur;
}


float VAL_IDF(char* e1){
    int index;
    elem* p;
    elem* adr;
    float b = return_val_idf(e1,&index,&adr);
	return b;
}

/*
void afficherTS()
{
    int i=0; elem* p;
    for ( i = 0; i < taille; i++)
    {
        if(tess[i]!=NULL){
            p=tess[i];
            while (p!=NULL)
            {
                printf("%s ---> %d\n",p->nom ,p->type,p->taille_tab);
                p=p->svt;
            }
            
        }
    }
    
}
*/

void printHachTable(){
int i;
printf("\n________________________________________________________________________\n ");

printf("----------------------------TABLE DES IDF------------------------------ \n");
printf("________________________________________________________________________\n ");


printf("   IDF      |  CodeEntite |    Type      |  taille_tab   | valeur   \n");
printf("________________________________________________________________________ \n");
printf("________________________________________________________________________\n");


for ( i = 0; i <taille; i++)
{
    if (tess[i]!=NULL)
    { 
    printList(tess[i]);
    }
    }
}


void printList(elem* l){ 
	char str[15];
for ( l ; l!=NULL; l=l->svt)
    {  strcpy(str,l->nom); countSpaces(str);
		printf("  %s   |",str);
		printf("  %s   |",l->isconst == 1?"CONST   ":"VARIABLE");
		printf("  %s  %d |",switchType(l->type),l->type);
		printf("  %d            |",l->taille_tab);
		printf("  %f \n",l->valeur);
printf("________________________________________________________________________ \n");
    }
}


void countSpaces(char s[8])
{
	int i;
for ( i = strlen(s); i < 8; i++) s[i]=' ';

s[8]='\0';

}


char* switchType(int type){

	switch (type)
	{
	case 1:
         return "INTEGER ";
		break;
	
		case 2:
         return "FLOAT   ";

		break;
		case 3:
         return "STRUCT  ";

		break;
	default:
		break;
	}
	return "NON INIT";
}



int doubleDeclaration(char *entite)
{
    int index;
    elem *adr;
    if(recherche(entite,&index,&adr))
    {
        //yyerror("erreur semantique double declaration d'un idf \n");
		return 1;
    
    }else{return 0;}
    
    
}

int  dec (char * entite)
{
    int index ;
    elem* adr;
    if (!recherche(entite,&index,&adr))
    {
        //yyerror("erreur semantique idf non declarer \n");
		return 1;
     }else{return 0;}
}

int returntype(char* antite )
{  int index;
   elem *adr;
   int b = recherche(antite, &index, &adr);
   if(b==1) { 
       
      return adr->type;
   }
}

int ReturnDataType(void *data) {
    if(sizeof(data) == sizeof(int)) {
        //printf("Data type is int\n");
		return 1;
    } else if(sizeof(data) == sizeof(float)) {
        //printf("Data type is float\n");
		return 2;
    } else if(sizeof(data) == sizeof(double)) {
        //printf("Data type is double\n");
		return 3;
    } else {
        //printf("Data type is unknown\n");
		return 10;
    }
}

int veriftailletab(char* tab , int taill)
{
int index;
   elem *adr;
   int b = recherche(tab, &index, &adr);
    if(b==1) {

      if((taill < 0) || (taill > adr->taille_tab)) { /*yyerror("taille  du tableau  depasse la capacite");*/
                                                     return 1;
													}
													else{return 0;}
   }
}


void inser_val(char* antite , float val )
{

    int index;
   elem *adr;
   int b = recherche(antite, &index, &adr);
   if(b==1) { 
       adr->valeur = val ;
	  
     

   }else{inserer_cst(antite,2,0,0,val);}

}
void initialisation()
{   int i;
     for (i=0;i<40;i++)
  {tabs[i].state=0;
    tabm[i].state=0;}
}

void ins (char entite[], char code[],char type[],float val,int i, int y)
{
  switch (y)
 { 
   
   case 1:/*insertion dans la table des mots clés*/
       tabm[i].state=1;
       strcpy(tabm[i].name,entite);
       strcpy(tabm[i].type,code);
       break; 
    
   case 2:/*insertion dans la table des séparateurs*/
      tabs[i].state=1;
      strcpy(tabs[i].name,entite);
      strcpy(tabs[i].type,code);
      break;
 }

}


/***Step 4: La fonction Rechercher permet de verifier  si l'entité existe dèja dans la table des symboles */

void rechercher (char entite[], char code[],char type[],float val,int y)	
{
int j,i;
switch(y) 
  {
   case 1:/*verifier si la case dans la tables des mots clés est libre*/
       
       for (i=0;((i<40)&&(tabm[i].state==1))&&(strcmp(entite,tabm[i].name)!=0);i++); 
        if(i<40)
          ins(entite,code,type,val,i,1);
        else
          printf("entité existe déjà\n");
        break; 
    
   case 2:/*verifier si la case dans la tables des séparateurs est libre*/
         for (i=0;((i<40)&&(tabs[i].state==1))&&(strcmp(entite,tabs[i].name)!=0);i++); 
        if(i<40)
         ins(entite,code,type,val,i,2);
        else
   	       printf("entité existe déjà\n");
        break;

  }

}

void afficher()
{int i;
 
printf("\n/***************Table des symboles mots clés*************/\n");

printf("_____________________________________\n");
printf("\t| NomEntite |  CodeEntite | \n");
printf("_____________________________________\n");
  
for(i=0;i<40;i++)
    if(tabm[i].state==1)
      { 
        printf("\t|%10s |%12s | \n",tabm[i].name, tabm[i].type);
               
      }

printf("\n/***************Table des symboles séparateurs*************/\n");

printf("_____________________________________\n");
printf("\t| NomEntite |  CodeEntite | \n");
printf("_____________________________________\n");
  
for(i=0;i<40;i++)
    if(tabs[i].state==1)
      { 
        printf("\t|%10s |%12s | \n",tabs[i].name,tabs[i].type );
        
      }

}


