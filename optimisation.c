#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "QUAD.h"
#include "ts.h"
#include "optimisation.h"


void optimisation()
{
   int changes;
	int nbbalyage = 1;
   do{
   changes = checkX2()+simplifierAlg()+propArth()+Propagation_de_copie();
   //printf("%d\n",changes);
    int i=0;
    for(i=0;i<indq;i++)
    {
        if(strcmp(q[i].opr,"")==0)
        {
            int j = 0;
            for(j=i;j<indq;j++)
            {
                q[j].opr=strdup(q[j+1].opr);
                q[j].op1=strdup(q[j+1].op1);
                q[j].op2=strdup(q[j+1].op2);
                q[j].res=strdup(q[j+1].res);
            }
            indq--;
        }
    }
	printf("\n ----> (balyage num %d ) <----\n\n",nbbalyage);
	afficherQuad();
	printf("\n");
	nbbalyage++;
   }while(changes > 0);
}

int checkX2() // x*2 ==> x + x 
{
    int i=0;
	int change = 0;
    for (i=0;i<indq;i++)
    {
        if(q[i].opr[0]=='*')
        {
            if((strcmp(q[i].op1, "2") == 0))
            {
                q[i].opr=strdup("+");
                q[i].op1=strdup(q[i].op2);
                q[i].op2=strdup(q[i].op2);
				change = 1;
            }
            else if ((strcmp(q[i].op1, "2") == 0))
            {
                q[i].opr=strdup("+");
                q[i].op1=strdup(q[i].op1);
                q[i].op2=strdup(q[i].op2);
				change = 1;
            }
        }
    }
	
	return change;
}

int simplifierAlg(){
	// Parcours du tableau de quadruplets
    int ind=0;
    int change= 0;
 

    while(q[ind].opr != NULL) {

      if ((strcmp(q[ind].opr, "+") == 0)){ // l'addition
        if (((strcmp(q[ind].op1, "1")==0) && (strcmp(q[ind].op2, "-1") == 0)) || ((strcmp(q[ind].op1, "-1")==0) && (strcmp(q[ind].op2, "1") == 0))) { // verifier que les deux operandes sont des chiffres et entier
          q[ind].opr = strdup("");
		  q[ind].op2 = strdup("");
		  q[ind].op1 = strdup("");
		  q[ind].res = strdup("");
		  //printf("ok\n");
          change = 1;
        }
		
	  }
	  
	  if ((strcmp(q[ind].opr, "-") == 0)){ // la soustraction
        if (((strcmp(q[ind].op1, "1")==0) && (strcmp(q[ind].op2, "1") == 0))) { // verifier que les deux operandes sont des chiffres et entier
          q[ind].opr = strdup("");
		  q[ind].op2 = strdup("");
		  q[ind].op1 = strdup("");
		  q[ind].res = strdup("");
		  //printf("ok\n");
          change = 1;
        }
		
	  }
	  ind++;
	}
    
    // Affichage des quadruplets modifiés
    /*printf("Quadruplets modifiés :\n");
	int j;
    for ( j = 0; j < i; j++)
    {
        printf("%s, %s, %s, %s\n", q[j].opr, q[j].op1, q[j].op2, q[j].res);
    }*/
	return change;
    
}








int checkVarUse()
{
    int bol=0;
    int l=0;
    elem *p;
	int change = 0;
    for(l=0;l<taille;l++){
		p=tess[l];
		
          while(p!=NULL)
           {   bol=0;
                    int k =0 ;
                    for(k=0;k<indq;k++)
                    {    char *pointeur1 = strstr(q[k].res, p->nom);
						  //printf("\n****%s******\n",p->nom);
						  if (pointeur1 != NULL) {
                           char* resultat1 = (char*) malloc(strlen(pointeur1)); // Allouer de la mémoire pour le pointeur1 'resultat1'
                           memcpy(resultat1, pointeur1, strlen(p->nom)); // Copier la sous-chaîne extraite dans le tableau 'resultat1'
                           resultat1[strlen(pointeur1)] = '\0'; // Ajouter le caractère de fin de chaîne
                           //printf("----%s-------\n",resultat1);
                           //printf("%d",strcmp(q[k].res,p->nom));
                             if(strcmp(resultat1,p->nom) == 0)
                             {bol=1;
						      change= 1;
					         //printf("%d",strcmp( memcpy(resultat, strstr(q[k].op1, p->nom), strlen(strstr(q[k].op1, p->nom)) + 1),p->nom));
					         break;
						     }
						     free(resultat1); // Libérer la mémoire allouée pour le pointeur 'resultat1'
						 
						   }
						 
						    char *pointeur2 = strstr(q[k].op1, p->nom);
						    //printf("\n****%s******\n",p->nom);
						    if (pointeur2 != NULL) {
                            char* resultat2 = (char*) malloc(strlen(pointeur2)); // Allouer de la mémoire pour le pointeur2 'resultat2'
                            memcpy(resultat2, pointeur2, strlen(p->nom)); // Copier la sous-chaîne extraite dans le tableau 'resultat2'
                            resultat2[strlen(pointeur2)] = '\0'; // Ajouter le caractère de fin de chaîne
                            //printf("----%s-------\n",resultat1);
                            //printf("%d",strcmp(q[k].res,p->nom));
                            if(strcmp(resultat2,p->nom) == 0)
                            {bol=1;
						     change= 1;
					        //printf("%d",strcmp( memcpy(resultat, strstr(q[k].op1, p->nom), strlen(strstr(q[k].op1, p->nom)) + 1),p->nom));
					        break;
						    }
						   free(resultat2); // Libérer la mémoire allouée pour le pointeur 'resultat2'
						   }
						   
						   
						   char *pointeur3 = strstr(q[k].op2, p->nom);
						    //printf("\n****%s******\n",p->nom);
						    if (pointeur3 != NULL) {
                            char* resultat3 = (char*) malloc(strlen(pointeur3)); // Allouer de la mémoire pour le pointeur3 'resultat3'
                            memcpy(resultat3, pointeur3, strlen(p->nom)); // Copier la sous-chaîne extraite dans le tableau 'resultat3'
                            resultat3[strlen(pointeur3)] = '\0'; // Ajouter le caractère de fin de chaîne
                            //printf("----%s-------\n",resultat1);
                            //printf("%d",strcmp(q[k].res,p->nom));
                            if(strcmp(resultat3,p->nom) == 0)
                            {bol=1;
						     change= 1;
					        //printf("%d",strcmp( memcpy(resultat, strstr(q[k].op1, p->nom), strlen(strstr(q[k].op1, p->nom)) + 1),p->nom));
					        break;
						    }
						   free(resultat3); // Libérer la mémoire allouée pour le pointeur 'resultat2'
						   }
						   
						   
						   
                    }
                    if(bol==0)
                    {
                        printf("!!! Attention !!! : IDF ( %s ) declare et non utiliser\n",p->nom);
                    }
             p=p->svt;
           }}
		   
		   
		   return change;
   
}
       
int Propagation_de_copie( )
{
    int i=0;
	int change = 0;
    for (i=0;i<indq;i++)
    {
        if((q[i].opr[0]==':') || (q[i].opr[0]=='='))
        {
            int k=0;
            for(k=i+1;k<indq;k++)
            {
                if(strcmp(q[i].op1,q[k].res)==0 || strcmp(q[i].res,q[k].res)==0)
                    break;
                if(q[k].opr[0]=='+' || q[k].opr[0]=='*' || q[k].opr[0]=='-' || q[k].opr[0]=='/'  )
                {
                    if(strcmp(q[i].res,q[k].op1)==0)
                    {
                        q[k].op1=strdup(q[i].op1);
                        q[i].opr=strdup("");
                        q[i].op1=strdup("");
                        q[i].op2=strdup("");
                        q[i].res=strdup("");
						change = 1;
                    }
                    else if(strcmp(q[i].res,q[k].op2)==0)
                    {
                        q[k].op2=strdup(q[i].op1);
                        q[i].opr=strdup("");
                        q[i].op1=strdup("");
                        q[i].op2=strdup("");
                        q[i].res=strdup("");
						change = 1;
                    }
                }
            }
        }
    }
	
	
	return change;
}


int isNumber(char *s) // pour distinguer le temporelle et les numeros
{
  int i=0;

  while(s[i] != '\0')
  {

    if (s[i] == '.')
    {
      return (2); // float
    }

    if (isdigit(s[i]) == 0) // c'est pas un numero il ya un caractere different de chiffres
      return(0);

    i++;
  }

  return(1); // c'est un numero entier succes
  
}


int propArth(){ // enlever les operations et le remplacer par des affectations direct
  int ind=0;
  int change= 0;
  while(ind<indq){

    if(q[ind].opr != NULL) {

      if ((strcmp(q[ind].opr, "+") == 0)){ // l'addition
        if ((isNumber(q[ind].op1) == 1) && (isNumber(q[ind].op2) == 1)){ // verifier que les deux operandes sont des chiffres et entier
          sprintf(q[ind].op1, "%d", atoi(q[ind].op2) + atoi(q[ind].op1)); // remplacer dans qui suite l'addition par affectation
          q[ind].op2 = "";
          q[ind].opr = ":=";
		  //printf("ok\n");
          change = 1;
        }
        if ((isNumber(q[ind].op1) == 2) && (isNumber(q[ind].op2) == 2)){ // si c'est un float
          sprintf(q[ind].op1, "%.2f", atof(q[ind].op2) + atof(q[ind].op1));
          q[ind].op2 = "";
          q[ind].opr = ":=";
          change = 1;
        }
      }

      if ((strcmp(q[ind].opr, "-") == 0))
      {
        if ((isNumber(q[ind].op1) == 1) && (isNumber(q[ind].op2) == 1))
        {
          sprintf(q[ind].op1, "%d", atoi(q[ind].op2) - atoi(q[ind].op1));
          q[ind].op2 = "";
          q[ind].opr = ":=";
          change = 1;
        }
        if ((isNumber(q[ind].op1) == 2) && (isNumber(q[ind].op2) == 2))
        {
          sprintf(q[ind].op1, "%.2f", atof(q[ind].op2) - atof(q[ind].op1));
          q[ind].op2 = "";
          q[ind].opr = ":=";
          change = 1;
        }
      }

      if ((strcmp(q[ind].opr, "*") == 0))
      {
        if ((isNumber(q[ind].op1) == 1) && (isNumber(q[ind].op2) == 1))
        {
          sprintf(q[ind].op1, "%d", atoi(q[ind].op2) * atoi(q[ind].op1));
          q[ind].op2 = "";
          q[ind].opr = ":=";
          change = 1;
        }
        if ((isNumber(q[ind].op1) == 2) && (isNumber(q[ind].op2) == 2))
        {
          sprintf(q[ind].op1, "%.2f", atof(q[ind].op2) * atof(q[ind].op1));
          q[ind].op2 = "";
          q[ind].opr = ":=";
          change = 1;
        }
      }

      if ((strcmp(q[ind].opr, "/") == 0))
      {
        if ((isNumber(q[ind].op1) == 1) && (isNumber(q[ind].op2) == 1))
        {
          sprintf(q[ind].op1, "%d", atoi(q[ind].op2) / atoi(q[ind].op1));
          q[ind].op2 = "";
          q[ind].opr = ":=";
          change = 1;
        }
        if ((isNumber(q[ind].op1) == 2) && (isNumber(q[ind].op2) == 2))
        {
          sprintf(q[ind].op1, "%.2f", atof(q[ind].op2) / atof(q[ind].op1));
          q[ind].op2 = "";
          q[ind].opr = ":=";
          change = 1;
        }
      }
 }
 ind++;
}
 return change;
}



int eliminer() {
  int analyse = 0;
  int change = 0;
  int count=0;


  while(analyse + 1< indq) {  
     /*printf("%s\t",q[analyse].opr);
	  printf("%s\t",q[analyse].op1);
	  printf("%s\t",q[analyse].op2);
	  printf("%s\t",q[analyse].res);
	  printf("%d\n",analyse);*/	 
      //printf("%s\t",q[analyse].res);
    if(q[analyse].opr!=NULL && strcmp(q[analyse].opr, ":=")== 0 && used(q[analyse].res, analyse)!=0) {
      //printf("used %d\n",used(q[analyse].res,analyse));
      //removeQuad(analyse);
      q[analyse].opr=strdup("");
      q[analyse].op1=strdup("");
      q[analyse].op2=strdup("");
      q[analyse].res=strdup("");
	  change = 1;
	  count++;
      /*printf("%s\t",q[analyse].opr);
	  printf("%s\t",q[analyse].op1);
	  printf("%s\t",q[analyse].op2);
	  printf("%s\n",q[analyse].res);
	  printf("%d\n",analyse);*/
      
    }
    analyse ++;

    
  }
  if(q[analyse].opr!=NULL && strcmp(q[analyse].opr, ":=")==0) {
    //removeQuad(analyse); 
	  q[analyse].opr=strdup("");
      q[analyse].op1=strdup("");
      q[analyse].op2=strdup("");
      q[analyse].res=strdup("");
	  change = 1;
	  count++;
  }
  
    

    corrigerBranch();
 

  return change;
}



int used(char*temp, int index) {

  int i=0;
  if(i >= indq) return 1;
  
  while(i < indq ) {

    if(i==index) {i++;continue;}
    if(q[i].opr!=NULL && strcmp(q[i].op1, temp)==0 || q[i].opr!=NULL && strcmp(q[i].op2, temp)==0){

      return 0;
    }
    if(q[i].opr!=NULL && strcmp(q[i].res, temp)==0 && i > index) {
      return 1;
    }
    
      

    i++;
  }
  return 1;
  
}


void corrigerBranch() {
  int branch=0;
  while(branch < indq) {
    if (q[branch].opr!=NULL && q[branch].opr[0] == 'B') {
      int etiq = atoi(q[branch].op1);
      
      
      while(etiq < indq && q[etiq].opr == NULL) {
        
        etiq++;
        }
      sprintf(q[branch].op1, "%d", etiq);
      
    }
    branch++;
  }
}


/*void simplifier(){
	int i=0;
    while(i < indq) {
		if(q[i].opr != NULL && strcmp(q[i].opr, "-")== 0 && strcmp(q[analyse].op1, "1")== 0) {
        removeQuad(analyse);
    }
*/	
	
