#ifndef OPT
#define OPT
#include "ts.h"


void optimisation();

int checkX2();

int checkVarUse();

int Propagation_de_copie( );
int propArth( );


int eliminer();
int used(char*temp, int index);
void corrigerBranch();
int simplifierAlg();

#endif //OPT
