#ifndef TS_H
#define TS_H


#define taille 100

//    table de symbol
typedef struct elt {
    char* nom;
    int type;
    int taille_tab;
    int isconst;
    struct elt* svt;
    float valeur ;
}elem;

elem* tess[taille];



void init();

int recherche (char* ,int* ,elem**);

int fhach (char* e);

void inserer(char* e1,int type, int taill , int valc );

int recherche_cst(char* e1,int* index,elem** adr);

void inserer_cst(char* e1,int type, int taill , int valc ,float valeur);

void inserer_struct(char* e1,char* type, int taill , int valc );

// fonction affichage de TS 

void afficherTS();
void printHachTable();
void printList(elem* l);
void countSpaces(char s[8]);
char* switchType(int type);

//************************************************************


int doubleDeclaration(char *entite);
int dec (char * entite);
int returntype(char* entite);
int ReturnDataType(void *data);
int veriftailletab(char* tab , int taill);
int CONST_VALEUR(char* Entite);
float return_val_idf(char* e1,int* index,elem** adr);
float VAL_IDF(char* e1);

void inser_val(char* antite , float val );
void test_retun_typ();

// table  mots clés
typedef struct
{ 
   int state; 
   char name[20];
   char type[20];
} et;
et tabs[40],tabm[40];

void initialisation();
void ins (char entite[], char code[],char type[],float val,int i, int y);
void rechercher (char entite[], char code[],char type[],float val,int y);
void afficher();

#endif //TS_H
