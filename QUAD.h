#ifndef QUAD_H
#define QUAD_H

//t la taille de la table contenant les quadruplets
#define t 100
//la structure d'un element de la table 

typedef struct 
{
    char*opr;
    char* op1;
    char* op2;
    char* res;
}quadruplet;

// pile liste variable 
typedef struct element_pile{
	char *donnee;
	struct element_pile *prc;
}pile;

pile *sauv_var;



// pile update  qc position 
typedef struct element_pile_Qc{
	int donnee;
	struct element_pile_Qc *prc;
}pileQc;

pileQc *pile1;


pileQc *pile2;

pileQc *pileFOR;



//declaration de la table 
quadruplet q[t];

//signature des fonctions de qud.c
void quad(char*,char*,char*,char*);
void afficherQuad();
void afficherQuadFinal();
void createQuadCompare(int type, char *cond1, char *cond2, char *res);

//convert interger to string
char* ToSTR(int i);

void empiler_qc(pileQc **p, int pos);
int depiler_qc(pileQc **p);
void removeQuad(int index);
#endif //QUAD_H

