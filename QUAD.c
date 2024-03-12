#include<stdio.h>
#include<string.h>
#include <stdlib.h>
#include "QUAD.h"


int indq=0;

void quad (char* o,char*o1,char*o2,char*r)
{
    q[indq].opr=o;
    q[indq].op1=o1;
    q[indq].op2=o2;
    q[indq].res=r;
    indq++;
}


void afficherQuad()
{
    int i;
    for ( i = 0; i < indq; i++)
    {
        printf("%d-(%s ,%s ,%s ,%s )\n",i,q[i].opr,q[i].op1,q[i].op2,q[i].res);
    }
    
}

void afficherQuadFinal(){
	int i;
    for ( i = 0; i < indq; i++)
    {
        printf("\t\t\t\t\t|\t\t%d-(%s ,%s ,%s ,%s )\t\t |\n",i,q[i].opr,q[i].op1,q[i].op2,q[i].res);
    }
}

//convert interger to string
char* ToSTR(int i){
	char s[15];
	sprintf(s,"%d",i);
	return strdup(s);
}

//creation d'1 quad arithmeitque
void createQuadCompare(int type, char *cond1, char *cond2, char *res){
	char *TypeBR;
	switch(type){
		case 1 :{//1==> "==" (égale)
			TypeBR=strdup("BNE");
		}
		break;
		case 2 :{//2==> "!=" (different)
			TypeBR=strdup("BE");
		}
		break;
		case 3 :{//3==> ">=" higher Or Equal
			TypeBR=strdup("BL");
		}
		break;
		case 4 :{//4==> "<=" lower Or Equal
			TypeBR=strdup("BG");
		}
		break;
		case 5 :{//5==> "<" lower
			TypeBR=strdup("BGE");
		}
		break;
		case 6 :{//6==> ">" higher
			TypeBR=strdup("BLE");
		}
		break;
	}
	quad(TypeBR,ToSTR(indq+3),cond1,cond2);
	quad(":=","1","",res);
	quad("BR",ToSTR(indq+2),"","");
	quad(":=","0","",res);
}

//creation d'1 quad logique
void createQuadLogic(int type, char *cond1, char *cond2, char *res){
	switch(type){
		case 1 :{//1==> not
			quad("BNZ",ToSTR(indq+3),cond1,"");
			quad(":=","1","",res);
			quad("BR",ToSTR(indq+2),"","");
			quad(":=","0","",res);
		}
		break;
		case 2 :{//2==> or
			quad("BNZ",ToSTR(indq+4),cond1,"");
			quad("BNZ",ToSTR(indq+3),cond2,"");
			quad(":=","0","",res);
			quad("BR",ToSTR(indq+2),"","");
			quad(":=","1","",res);
		}
		break;
		case 3 :{//3==> and
			quad("BZ",ToSTR(indq+4),cond1,"");
			quad("BZ",ToSTR(indq+3),cond2,"");
			quad(":=","1","",res);
			quad("BR",ToSTR(indq+2),"","");
			quad(":=","0","",res);
		}
		break;
	}
}  

//les piles pour l'imbrecation

//empiler String
void empiler_Str(pile **p,char *donne){
	pile *new;

	new=(pile*)malloc(sizeof(pile));
	new->donnee=strdup(donne);

	//mise à jour chainage
	new->prc=*p;
	*p=new;
}

//depiler
char* depiler(pile**p){
	char *res;

	pile *H;
	H=*p;
	res=strdup(H->donnee);
	*p=H->prc;
	free(H);
	return res;
}


// empilement et dépilement 
void empiler_qc(pileQc **p, int pos){
     pileQc *new;
	 new=(pileQc*)malloc(sizeof(pileQc));
	  new->donnee = pos;

	//mise à jour chainage
	new->prc=*p;
	*p=new;
}

int depiler_qc(pileQc **p){
	int position;
	pileQc *H;
	H=*p;
	position = H->donnee;
	*p= H->prc;
	free(H);
	return position;
	
}


void removeQuad(int index) {
  if(index < indq) {
    q[index].opr = NULL;
    q[index].op1= NULL;
    q[index].op2= NULL;
    q[index].res= NULL;
  }

} 
