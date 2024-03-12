#include<stdio.h>
#include<string.h>
#include <stdlib.h>
#include "QUAD.h"
#include "ts.h"

/***********************************Generation de code machine************************************************/
void assembler(){
	int l,type,v=0; 
	char c[12]="";
	int ascii=0;
  int in= 0;

  typedef struct e {
    char * ind;
    
    }e;
  e tab[100];

FILE *fp;
fp =fopen("code_obj.txt","a");
if (fp ==NULL){   printf("the has been an error !");}
fprintf(fp,"DATA SEGMENT \n");

    elem *p;
    for(l=0;l<taille;l++){
		p=tess[l];
		
          while(p!=NULL)
           {
             type=p->type;
             switch (type)
                                  {
           case 1 :  
            if(p->taille_tab==0)  fprintf(fp,"%s DW ?\n",p->nom);
               else     fprintf(fp,"%s DW %d dup (?) \n",p->nom,p->taille_tab);
             break;
             case 2:
              if(p->taille_tab==0)  fprintf(fp,"%s DD ?\n",p->nom);
               else   fprintf(fp,"%s DD dup(?)\n",p->nom);
             break;
             case 3:
               fprintf(fp,"%s DB ?\n",p->nom);
             break;
             case 4:
                 fprintf(fp,"%s DB dup(?)\n",p->nom);
             break;
             case 5:
               fprintf(fp,"%s DB ?\n",p->nom);
            break;
               default:
            break;
            
                                   }
            p= p->svt;
           }
            
        }
        fprintf(fp,"t DW 100 dup (?) \n");
         fprintf(fp,"DATA ENDS\n");
        fprintf(fp,"\n");
       
        fprintf(fp,"CODE SEGEMENT\n");
        fprintf(fp,"ASSUME CS:CODE, DS:DATA\n");
        fprintf(fp,"MAIN :\n");
	    fprintf(fp,"MOV AX,DATA\n");
	    fprintf(fp,"MOV DS,AX\n\n");
    
for(l=0;l<indq;l++)                       {
       for (v=0;v<in;v++){
       
        
         sprintf(c,"%d",l);
         
         if (strcmp(c,tab[v].ind)==0  ) fprintf(fp,"etiquette%s:",c);
         c[0]='\0';
       }
	
		if(strcmp(q[l].opr,"+")==0){
			if((q[l].op1[0]=='T')&&(q[l].op2[0]=='T')){
              fprintf(fp,"MOV SI,%c\n",q[l].op1[1]);
                  fprintf(fp,"ADD SI,SI\n");
                 fprintf(fp,"MOV AX, t[SI] \n");
                   fprintf(fp,"ADD AX,t[%c]\n ",q[l].op2[1]);
                   if(q[l].res[0]=='T')  {    
                                      fprintf(fp,"MOV SI,%c\n",q[l].res[1]);
                                      fprintf(fp,"ADD SI,SI\n");
                                      fprintf(fp,"MOV t[SI],AX \n");
                                   } 
                     else               fprintf(fp,"MOV %s,AX \n",q[l].res);
			}
			else{
				if(q[l].op1[0]=='T'){
                     fprintf(fp,"MOV SI,%c\n",q[l].op1[1]);
                     fprintf(fp,"ADD SI,SI\n");
                     fprintf(fp,"MOV AX, t[SI]\n");
                     fprintf(fp,"ADD AX, %s\n",q[l].op2);
                       if(q[l].res[0]=='T')  {    
                                      fprintf(fp,"MOV SI,%c\n",q[l].res[1]);
                                      fprintf(fp,"ADD SI,SI\n");
                                      fprintf(fp,"MOV t[SI],AX \n");
                                   } 
                        else            fprintf(fp,"MOV %s,AX \n",q[l].res);
					
				}
				else if(q[l].op2[0]=='T'){
                    fprintf(fp,"MOV SI,%c\n",q[l].op2[1]);
                     fprintf(fp,"ADD SI,SI\n");
                     fprintf(fp,"MOV AX, t[SI]\n");
                     fprintf(fp,"ADD AX, %s\n",q[l].op1);
                     if(q[l].res[0]=='T')  {    
                                      fprintf(fp,"MOV SI,%c\n",q[l].res[1]);
                                      fprintf(fp,"ADD SI,SI\n");
                                      fprintf(fp,"MOV t[SI],AX \n");
                                   } 
                       else                    fprintf(fp,"MOV %s,AX \n",q[l].res);
					

				}
				else{  
					fprintf(fp,"MOV AX, %s\n",q[l].op1);
					fprintf(fp,"ADD AX, %s\n",q[l].op2);
           if(q[l].res[0]=='T')  {    
                                      fprintf(fp,"MOV SI,%c\n",q[l].res[1]);
                                      fprintf(fp,"ADD SI,SI\n");
                                      fprintf(fp,"MOV t[SI],AX \n");
                                   } 
          else                    fprintf(fp,"MOV %s,AX \n",q[l].res);
					

				}
			}

	}




  	if(strcmp(q[l].opr,"-")==0){
			if((q[l].op1[0]=='T')&&(q[l].op2[0]=='T')){
              fprintf(fp,"MOV SI,%c\n",q[l].op1[1]);
                  fprintf(fp,"ADD SI,SI\n");
                 fprintf(fp,"MOV AX, t[SI]\n");
                   fprintf(fp,"SUB AX,t[%c] \n",q[l].op2[1]);
                   if(q[l].res[0]=='T')  {    
                                      fprintf(fp,"MOV SI,%c\n",q[l].res[1]);
                                      fprintf(fp,"ADD SI,SI\n");
                                      fprintf(fp,"MOV t[SI],AX \n");
                                   } 
                     else               fprintf(fp,"MOV %s,AX \n",q[l].res);
			}
			else{
				if(q[l].op1[0]=='T'){
                     fprintf(fp,"MOV SI,%c\n",q[l].op1[1]);
                     fprintf(fp,"ADD SI,SI\n");
                     fprintf(fp,"MOV AX, t[SI]\n");
                     fprintf(fp,"SUB AX, %s\n",q[l].op2);
                       if(q[l].res[0]=='T')  {    
                                      fprintf(fp,"MOV SI,%c\n",q[l].res[1]);
                                      fprintf(fp,"ADD SI,SI\n");
                                      fprintf(fp,"MOV t[SI],AX \n");
                                   } 
                        else            fprintf(fp,"MOV %s,AX \n",q[l].res);
					
				}
				else if(q[l].op2[0]=='T'){
                    fprintf(fp,"MOV SI,%c\n",q[l].op2[1]);
                     fprintf(fp,"ADD SI,SI\n");
                     fprintf(fp,"MOV AX, t[SI]\n");
                     fprintf(fp,"SUB AX, %s\n",q[l].op1);
                     if(q[l].res[0]=='T')  {    
                                      fprintf(fp,"MOV SI,%c\n",q[l].res[1]);
                                      fprintf(fp,"ADD SI,SI\n");
                                      fprintf(fp,"MOV t[SI],AX \n");
                                   } 
                       else                    fprintf(fp,"MOV %s,AX \n",q[l].res);
					

				}
				else{  
					fprintf(fp,"MOV AX, %s\n",q[l].op1);
					fprintf(fp,"SUB AX, %s\n",q[l].op2);
           if(q[l].res[0]=='T')  {    
                                      fprintf(fp,"MOV SI,%c\n",q[l].res[1]);
                                      fprintf(fp,"ADD SI,SI\n");
                                      fprintf(fp,"MOV t[SI],AX \n");
                                   } 
          else                    fprintf(fp,"MOV %s,AX \n",q[l].res);
					

				}
			}

	}

	if(strcmp(q[l].opr,"*")==0){
			if((q[l].op1[0]=='T')&&(q[l].op2[0]=='T')){
              fprintf(fp,"MOV SI,%c\n",q[l].op1[1]);
                  fprintf(fp,"ADD SI,SI\n");
                 fprintf(fp,"MOV AX, t[SI]\n");
                   fprintf(fp,"MUL AX,t[%c] \n",q[l].op2[1]);
                   if(q[l].res[0]=='T')  {    
                                      fprintf(fp,"MOV SI,%c\n",q[l].res[1]);
                                      fprintf(fp,"ADD SI,SI\n");
                                      fprintf(fp,"MOV t[SI],AX \n");
                                   } 
                     else               fprintf(fp,"MOV %s,AX \n",q[l].res);
			}
			else{
				if(q[l].op1[0]=='T'){
                     fprintf(fp,"MOV SI,%c\n",q[l].op1[1]);
                     fprintf(fp,"ADD SI,SI\n");
                     fprintf(fp,"MOV AX, t[SI]\n");
                     fprintf(fp,"MUL AX, %s\n",q[l].op2);
                       if(q[l].res[0]=='T')  {    
                                      fprintf(fp,"MOV SI,%c\n",q[l].res[1]);
                                      fprintf(fp,"ADD SI,SI\n");
                                      fprintf(fp,"MOV t[SI],AX \n");
                                   } 
                        else            fprintf(fp,"MOV %s,AX \n",q[l].res);
					
				}
				else if(q[l].op2[0]=='T'){
                    fprintf(fp,"MOV SI,%c\n",q[l].op2[1]);
                     fprintf(fp,"ADD SI,SI\n");
                     fprintf(fp,"MOV AX, t[SI]\n");
                     fprintf(fp,"MUL AX, %s\n",q[l].op1);
                     if(q[l].res[0]=='T')  {    
                                      fprintf(fp,"MOV SI,%c\n",q[l].res[1]);
                                      fprintf(fp,"ADD SI,SI\n");
                                      fprintf(fp,"MOV t[SI],AX \n");
                                   } 
                       else                    fprintf(fp,"MOV %s,AX \n",q[l].res);
					

				}
				else{  
					fprintf(fp,"MOV AX, %s\n",q[l].op1);
					fprintf(fp,"MUL AX, %s\n",q[l].op2);
           if(q[l].res[0]=='T')  {    
                                      fprintf(fp,"MOV SI,%c\n",q[l].res[1]);
                                      fprintf(fp,"ADD SI,SI\n");
                                      fprintf(fp,"MOV t[SI],AX \n");
                                   } 
          else                    fprintf(fp,"MOV %s,AX \n",q[l].res);
					

				}
			}

	}



	if(strcmp(q[l].opr,"/")==0){
			if((q[l].op1[0]=='T')&&(q[l].op2[0]=='T')){
              fprintf(fp,"MOV SI,%c\n",q[l].op1[1]);
                  fprintf(fp,"ADD SI,SI\n");
                 fprintf(fp,"MOV AX, t[SI]\n");
                   fprintf(fp,"DIV AX,t[%c] \n",q[l].op2[1]);
                   if(q[l].res[0]=='T')  {    
                                      fprintf(fp,"MOV SI,%c\n",q[l].res[1]);
                                      fprintf(fp,"ADD SI,SI\n");
                                      fprintf(fp,"MOV t[SI],AX \n");
                                   } 
                     else               fprintf(fp,"MOV %s,AX \n",q[l].res);
			}
			else{
				if(q[l].op1[0]=='T'){
                     fprintf(fp,"MOV SI,%c\n",q[l].op1[1]);
                     fprintf(fp,"ADD SI,SI\n");
                     fprintf(fp,"MOV AX, t[SI]\n");
                     fprintf(fp,"DIV AX, %s\n",q[l].op2);
                       if(q[l].res[0]=='T')  {    
                                      fprintf(fp,"MOV SI,%c\n",q[l].res[1]);
                                      fprintf(fp,"ADD SI,SI\n");
                                      fprintf(fp,"MOV t[SI],AX \n");
                                   } 
                        else            fprintf(fp,"MOV %s,AX \n",q[l].res);
					
				}
				else if(q[l].op2[0]=='T'){
                    fprintf(fp,"MOV SI,%c\n",q[l].op2[1]);
                     fprintf(fp,"ADD SI,SI\n");
                     fprintf(fp,"MOV AX, t[SI]\n");
                     fprintf(fp,"DIV AX, %s\n",q[l].op1);
                     if(q[l].res[0]=='T')  {    
                                      fprintf(fp,"MOV SI,%c\n",q[l].res[1]);
                                      fprintf(fp,"ADD SI,SI\n");
                                      fprintf(fp,"MOV t[SI],AX \n");
                                   } 
                       else                    fprintf(fp,"MOV %s,AX \n",q[l].res);
					

				}
				else{  
					fprintf(fp,"MOV AX, %s\n",q[l].op1);
					fprintf(fp,"DIV AX, %s\n",q[l].op2);
           if(q[l].res[0]=='T')  {    
                                      fprintf(fp,"MOV SI,%c\n",q[l].res[1]);
                                      fprintf(fp,"ADD SI,SI\n");
                                      fprintf(fp,"MOV t[SI],AX \n");
                                   } 
          else                    fprintf(fp,"MOV %s,AX \n",q[l].res);
					

				}
			}

	}

  if(strcmp(q[l].opr, "=" )==0 ){
    
		if(q[l].res[0]=='T'){
      
       fprintf(fp,"MOV t[%c],%s  \n",q[l].res[1],q[l].op1);
    }else
    
     fprintf(fp,"MOV %s,%s \n",q[l].res,q[l].op1);
		
   }

  if(strcmp(q[l].opr,":=")==0){
		if(q[l].op1[0]='T'){
		
      fprintf(fp,"MOV SI,%c\n",q[l].op1[1]);
       fprintf(fp,"ADD SI,SI\n");
       fprintf(fp,"MOV AX,t[SI] \n");
        fprintf(fp,"MOV %s,AX \n",q[l].res);
		}
	 	else {                      
                   fprintf(fp,"MOV AX,%s \n",q[l].op1);
                    fprintf(fp,"MOV %s,AX \n",q[l].res);
        } 
  }
   
//*****************************************************************************************************************************************
if(strcmp(q[l].opr,"BG")==0){ 
              
               tab[in].ind=q[l].op1;
              
                in=in+1;
            
         if((q[l].op2[0]=='T')&&(q[l].res[0]=='T'))
         {          fprintf(fp,"MOV SI,%c\n",q[l].op2[1]);
                     fprintf(fp,"ADD SI,SI\n");
                     fprintf(fp,"MOV AX, t[SI] \n");
                     fprintf(fp,"CMP AX,t[%c] \n",q[l].res[1]);
                     fprintf(fp,"JG etiquette %s\n",q[l].op1);

         }else   if (q[l].op2[0]=='T')
                      {  fprintf(fp,"MOV SI,%c\n",q[l].op2[1]);
                        fprintf(fp,"ADD SI,SI\n");
                        fprintf(fp,"MOV AX, t[SI]\n");
                        fprintf(fp,"CMP AX,%s \n",q[l].res);
                        fprintf(fp,"JG etiquette %s\n",q[l].op1);

                      }

         else{  
         ascii=ascii+q[l].op2[0];
          if ((65<=ascii<=90 ) && (q[l].res[0]=='T') ){
                     fprintf(fp,"MOV AX, %s\n",q[l].op2);
                     fprintf(fp,"CMP AX,t[%c] \n",q[l].res[1]);
                     fprintf(fp,"JG etiquette %s\n",q[l].op1);
          }else if(65<=ascii<=90 ){
                       fprintf(fp,"MOV AX, %s\n",q[l].op2);
                       fprintf(fp,"CMP AX,%s \n",q[l].res);
                       fprintf(fp,"JG etiquette %s\n",q[l].op1);
                                      }
                
          else if ((48<=ascii<=57 ) && (q[l].res[0]=='T') ){ 
               fprintf(fp,"CMP %s,t[%c] \n",q[l].op2,q[l].res[1]);
               fprintf(fp,"JG etiquette %s\n",q[l].op1);
          }else if (48<=ascii<=57 ){
              fprintf(fp,"CMP %s,%s \n",q[l].op2,q[l].res);
               fprintf(fp,"JG etiquette %s\n",q[l].op1);
                                }
       }             
		

	}

//*****************************************---    BNE  ------***************************************************************************
if(strcmp(q[l].opr,"BNE")==0){ 
               
               tab[in].ind=q[l].op1;
              
                in=in+1;
            
         if((q[l].op2[0]=='T')&&(q[l].res[0]=='T'))
         {          fprintf(fp,"MOV SI,%c\n",q[l].op2[1]);
                     fprintf(fp,"ADD SI,SI\n");
                     fprintf(fp,"MOV AX, t[SI] \n");
                     fprintf(fp,"CMP AX,t[%c] \n",q[l].res[1]);
                     fprintf(fp,"JNE etiquette %s\n",q[l].op1);

         }else   if (q[l].op2[0]=='T')
                      {  fprintf(fp,"MOV SI,%c\n",q[l].op2[1]);
                        fprintf(fp,"ADD SI,SI\n");
                        fprintf(fp,"MOV AX, t[SI]\n");
                        fprintf(fp,"CMP AX,%s \n",q[l].res);
                        fprintf(fp,"JNE etiquette %s\n",q[l].op1);

                      }

         else{  
         ascii=ascii+q[l].op2[0];
          if ((65<=ascii<=90 ) && (q[l].res[0]=='T') ){
                     fprintf(fp,"MOV AX, %s\n",q[l].op2);
                     fprintf(fp,"CMP AX,t[%c] \n",q[l].res[1]);
                     fprintf(fp,"JNE etiquette %s\n",q[l].op1);
          }else if(65<=ascii<=90 ){
                       fprintf(fp,"MOV AX, %s\n",q[l].op2);
                       fprintf(fp,"CMP AX,%s \n",q[l].res);
                       fprintf(fp,"JNE etiquette %s\n",q[l].op1);
                                      }
                
          else if ((48<=ascii<=57 ) && (q[l].res[0]=='T') ){ 
               fprintf(fp,"CMP %s,t[%c] \n",q[l].op2,q[l].res[1]);
               fprintf(fp,"JNE etiquette %s\n",q[l].op1);
          }else if (48<=ascii<=57 ){
              fprintf(fp,"CMP %s,%s \n",q[l].op2,q[l].res);
               fprintf(fp,"JNE etiquette %s\n",q[l].op1);
                                }
       }             
		

	}
//*************************************************---  BE ----*****************************************************************************
if(strcmp(q[l].opr,"BE")==0){ 
               
               tab[in].ind=q[l].op1;
              
                in=in+1;
            
         if((q[l].op2[0]=='T')&&(q[l].res[0]=='T'))
         {          fprintf(fp,"MOV SI,%c\n",q[l].op2[1]);
                     fprintf(fp,"ADD SI,SI\n");
                     fprintf(fp,"MOV AX, t[SI] \n");
                     fprintf(fp,"CMP AX,t[%c] \n",q[l].res[1]);
                     fprintf(fp,"JE etiquette %s\n",q[l].op1);

         }else   if (q[l].op2[0]=='T')
                      {  fprintf(fp,"MOV SI,%c\n",q[l].op2[1]);
                        fprintf(fp,"ADD SI,SI\n");
                        fprintf(fp,"MOV AX, t[SI]\n");
                        fprintf(fp,"CMP AX,%s \n",q[l].res);
                        fprintf(fp,"JE etiquette %s\n",q[l].op1);

                      }

         else{  
         ascii=ascii+q[l].op2[0];
          if ((65<=ascii<=90 ) && (q[l].res[0]=='T') ){
                     fprintf(fp,"MOV AX, %s\n",q[l].op2);
                     fprintf(fp,"CMP AX,t[%c] \n",q[l].res[1]);
                     fprintf(fp,"JE etiquette %s\n",q[l].op1);
          }else if(65<=ascii<=90 ){
                       fprintf(fp,"MOV AX, %s\n",q[l].op2);
                       fprintf(fp,"CMP AX,%s \n",q[l].res);
                       fprintf(fp,"JE etiquette %s\n",q[l].op1);
                                      }
                
          else if ((48<=ascii<=57 ) && (q[l].res[0]=='T') ){ 
               fprintf(fp,"CMP %s,t[%c] \n",q[l].op2,q[l].res[1]);
               fprintf(fp,"JE etiquette %s\n",q[l].op1);
          }else if (48<=ascii<=57 ){
              fprintf(fp,"CMP %s,%s \n",q[l].op2,q[l].res);
               fprintf(fp,"JE etiquette %s\n",q[l].op1);
                                }
       }  
       }           
// ******************************************* -- BL---- *********************************************************************

if(strcmp(q[l].opr,"BL")==0){ 
               
               tab[in].ind=q[l].op1;
              
                in=in+1;
            
         if((q[l].op2[0]=='T')&&(q[l].res[0]=='T'))
         {          fprintf(fp,"MOV SI,%c\n",q[l].op2[1]);
                     fprintf(fp,"ADD SI,SI\n");
                     fprintf(fp,"MOV AX, t[SI] \n");
                     fprintf(fp,"CMP AX,t[%c] \n",q[l].res[1]);
                     fprintf(fp,"JB etiquette %s\n",q[l].op1);

         }else   if (q[l].op2[0]=='T')
                      {  fprintf(fp,"MOV SI,%c\n",q[l].op2[1]);
                        fprintf(fp,"ADD SI,SI\n");
                        fprintf(fp,"MOV AX, t[SI]\n");
                        fprintf(fp,"CMP AX,%s \n",q[l].res);
                        fprintf(fp,"JB etiquette %s\n",q[l].op1);

                      }

         else{  
         ascii=ascii+q[l].op2[0];
          if ((65<=ascii<=90 ) && (q[l].res[0]=='T') ){
                     fprintf(fp,"MOV AX, %s\n",q[l].op2);
                     fprintf(fp,"CMP AX,t[%c] \n",q[l].res[1]);
                     fprintf(fp,"JB etiquette %s\n",q[l].op1);
          }else if(65<=ascii<=90 ){
                       fprintf(fp,"MOV AX, %s\n",q[l].op2);
                       fprintf(fp,"CMP AX,%s \n",q[l].res);
                       fprintf(fp,"JB etiquette %s\n",q[l].op1);
                                      }
                
          else if ((48<=ascii<=57 ) && (q[l].res[0]=='T') ){ 
               fprintf(fp,"CMP %s,t[%c] \n",q[l].op2,q[l].res[1]);
               fprintf(fp,"JB etiquette %s\n",q[l].op1);
          }else if (48<=ascii<=57 ){
              fprintf(fp,"CMP %s,%s \n",q[l].op2,q[l].res);
               fprintf(fp,"JB etiquette %s\n",q[l].op1);
                                }
       }  
       }
//*****************************************************--- BGE  ---- *************************************************
if(strcmp(q[l].opr,"BGE")==0){ 
               
               tab[in].ind=q[l].op1;
              
                in=in+1;
            
         if((q[l].op2[0]=='T')&&(q[l].res[0]=='T'))
         {          fprintf(fp,"MOV SI,%c\n",q[l].op2[1]);
                     fprintf(fp,"ADD SI,SI\n");
                     fprintf(fp,"MOV AX, t[SI] \n");
                     fprintf(fp,"CMP AX,t[%c] \n",q[l].res[1]);
                     fprintf(fp,"JAE etiquette %s\n",q[l].op1);

         }else   if (q[l].op2[0]=='T')
                      {  fprintf(fp,"MOV SI,%c\n",q[l].op2[1]);
                        fprintf(fp,"ADD SI,SI\n");
                        fprintf(fp,"MOV AX, t[SI]\n");
                        fprintf(fp,"CMP AX,%s \n",q[l].res);
                        fprintf(fp,"JAE etiquette %s\n",q[l].op1);

                      }

         else{  
         ascii=ascii+q[l].op2[0];
          if ((65<=ascii<=90 ) && (q[l].res[0]=='T') ){
                     fprintf(fp,"MOV AX, %s\n",q[l].op2);
                     fprintf(fp,"CMP AX,t[%c] \n",q[l].res[1]);
                     fprintf(fp,"JAE etiquette %s\n",q[l].op1);
          }else if(65<=ascii<=90 ){
                       fprintf(fp,"MOV AX, %s\n",q[l].op2);
                       fprintf(fp,"CMP AX,%s \n",q[l].res);
                       fprintf(fp,"JAE etiquette %s\n",q[l].op1);
                                      }
                
          else if ((48<=ascii<=57 ) && (q[l].res[0]=='T') ){ 
               fprintf(fp,"CMP %s,t[%c] \n",q[l].op2,q[l].res[1]);
               fprintf(fp,"JAE etiquette %s\n",q[l].op1);
          }else if (48<=ascii<=57 ){
              fprintf(fp,"CMP %s,%s \n",q[l].op2,q[l].res);
               fprintf(fp,"JAE etiquette %s\n",q[l].op1);
                                }
       }  
       }
//************************************** -- BLE ---- *******************************************************************
if(strcmp(q[l].opr,"BLE")==0){ 
              
               tab[in].ind=q[l].op1;
              
                in=in+1;
            
         if((q[l].op2[0]=='T')&&(q[l].res[0]=='T'))
         {          fprintf(fp,"MOV SI,%c\n",q[l].op2[1]);
                     fprintf(fp,"ADD SI,SI\n");
                     fprintf(fp,"MOV AX, t[SI] \n");
                     fprintf(fp,"CMP AX,t[%c] \n",q[l].res[1]);
                     fprintf(fp,"JBE etiquette %s\n",q[l].op1);

         }else   if (q[l].op2[0]=='T')
                      {  fprintf(fp,"MOV SI,%c\n",q[l].op2[1]);
                        fprintf(fp,"ADD SI,SI\n");
                        fprintf(fp,"MOV AX, t[SI]\n");
                        fprintf(fp,"CMP AX,%s \n",q[l].res);
                        fprintf(fp,"JBE etiquette %s\n",q[l].op1);

                      }

         else{  
         ascii=ascii+q[l].op2[0];
          if ((65<=ascii<=90 ) && (q[l].res[0]=='T') ){
                     fprintf(fp,"MOV AX, %s\n",q[l].op2);
                     fprintf(fp,"CMP AX,t[%c] \n",q[l].res[1]);
                     fprintf(fp,"JBE etiquette %s\n",q[l].op1);
          }else if(65<=ascii<=90 ){
                       fprintf(fp,"MOV AX, %s\n",q[l].op2);
                       fprintf(fp,"CMP AX,%s \n",q[l].res);
                       fprintf(fp,"JBE etiquette %s\n",q[l].op1);
                                      }
                
          else if ((48<=ascii<=57 ) && (q[l].res[0]=='T') ){ 
               fprintf(fp,"CMP %s,t[%c] \n",q[l].op2,q[l].res[1]);
               fprintf(fp,"JBE etiquette %s\n",q[l].op1);
          }else if (48<=ascii<=57 ){
              fprintf(fp,"CMP %s,%s \n",q[l].op2,q[l].res);
               fprintf(fp,"JBE etiquette %s\n",q[l].op1);
                                }
       }  
       }
//************************************ ---   BR -- *************************************************************************
if(strcmp(q[l].opr,"BR")==0){ 
              
               tab[in].ind=q[l].op1;
              
                in=in+1;
            
         if((q[l].op2[0]=='T')&&(q[l].res[0]=='T'))
         {          fprintf(fp,"MOV SI,%c\n",q[l].op2[1]);
                     fprintf(fp,"ADD SI,SI\n");
                     fprintf(fp,"MOV AX, t[SI] \n");
                     fprintf(fp,"CMP AX,t[%c] \n",q[l].res[1]);
                     fprintf(fp,"JMP etiquette %s\n",q[l].op1);

         }else   if (q[l].op2[0]=='T')
                      {  fprintf(fp,"MOV SI,%c\n",q[l].op2[1]);
                        fprintf(fp,"ADD SI,SI\n");
                        fprintf(fp,"MOV AX, t[SI]\n");
                        fprintf(fp,"CMP AX,%s \n",q[l].res);
                        fprintf(fp,"JMP etiquette %s\n",q[l].op1);

                      }

         else{  
         ascii=ascii+q[l].op2[0];
          if ((65<=ascii<=90 ) && (q[l].res[0]=='T') ){
                     fprintf(fp,"MOV AX, %s\n",q[l].op2);
                     fprintf(fp,"CMP AX,t[%c] \n",q[l].res[1]);
                     fprintf(fp,"JMP etiquette %s\n",q[l].op1);
          }else if(65<=ascii<=90 ){
                       fprintf(fp,"MOV AX, %s\n",q[l].op2);
                       fprintf(fp,"CMP AX,%s \n",q[l].res);
                       fprintf(fp,"JMP etiquette %s\n",q[l].op1);
                                      }
                
          else if ((48<=ascii<=57 ) && (q[l].res[0]=='T') ){ 
               fprintf(fp,"CMP %s,t[%c] \n",q[l].op2,q[l].res[1]);
               fprintf(fp,"JMP etiquette %s\n",q[l].op1);
          }else if (48<=ascii<=57 ){
              fprintf(fp,"CMP %s,%s \n",q[l].op2,q[l].res);
               fprintf(fp,"JMP etiquette %s\n",q[l].op1);
                                }
       }  
       }
//************************************* ----  BZ ---************************************************************
if(strcmp(q[l].opr,"BZ")==0){ 
             
               tab[in].ind=q[l].op1;
              
                in=in+1;
            
         if((q[l].op2[0]=='T')&&(q[l].res[0]=='T'))
         {          fprintf(fp,"MOV SI,%c\n",q[l].op2[1]);
                     fprintf(fp,"ADD SI,SI\n");
                     fprintf(fp,"MOV AX, t[SI] \n");
                     fprintf(fp,"CMP AX,t[%c] \n",q[l].res[1]);
                     fprintf(fp,"JZ etiquette %s\n",q[l].op1);

         }else   if (q[l].op2[0]=='T')
                      {  fprintf(fp,"MOV SI,%c\n",q[l].op2[1]);
                        fprintf(fp,"ADD SI,SI\n");
                        fprintf(fp,"MOV AX, t[SI]\n");
                        fprintf(fp,"CMP AX,%s \n",q[l].res);
                        fprintf(fp,"JZ etiquette %s\n",q[l].op1);

                      }

         else{  
         ascii=ascii+q[l].op2[0];
          if ((65<=ascii<=90 ) && (q[l].res[0]=='T') ){
                     fprintf(fp,"MOV AX, %s\n",q[l].op2);
                     fprintf(fp,"CMP AX,t[%c] \n",q[l].res[1]);
                     fprintf(fp,"JZ etiquette %s\n",q[l].op1);
          }else if(65<=ascii<=90 ){
                       fprintf(fp,"MOV AX, %s\n",q[l].op2);
                       fprintf(fp,"CMP AX,%s \n",q[l].res);
                       fprintf(fp,"JZ etiquette %s\n",q[l].op1);
                                      }
                
          else if ((48<=ascii<=57 ) && (q[l].res[0]=='T') ){ 
               fprintf(fp,"CMP %s,t[%c] \n",q[l].op2,q[l].res[1]);
               fprintf(fp,"JZ etiquette %s\n",q[l].op1);
          }else if (48<=ascii<=57 ){
              fprintf(fp,"CMP %s,%s \n",q[l].op2,q[l].res);
               fprintf(fp,"JZ etiquette %s\n",q[l].op1);
                                }
       }  
       }
//**************************** -----  BNZ  --- ****************************************
if(strcmp(q[l].opr,"BNZ")==0){ 
             
               tab[in].ind=q[l].op1;
              
                in=in+1;
            
         if((q[l].op2[0]=='T')&&(q[l].res[0]=='T'))
         {          fprintf(fp,"MOV SI,%c\n",q[l].op2[1]);
                     fprintf(fp,"ADD SI,SI\n");
                     fprintf(fp,"MOV AX, t[SI] \n");
                     fprintf(fp,"CMP AX,t[%c] \n",q[l].res[1]);
                     fprintf(fp,"JNZ etiquette %s\n",q[l].op1);

         }else   if (q[l].op2[0]=='T')
                      {  fprintf(fp,"MOV SI,%c\n",q[l].op2[1]);
                        fprintf(fp,"ADD SI,SI\n");
                        fprintf(fp,"MOV AX, t[SI]\n");
                        fprintf(fp,"CMP AX,%s \n",q[l].res);
                        fprintf(fp,"JNZ etiquette %s\n",q[l].op1);

                      }

         else{  
         ascii=ascii+q[l].op2[0];
          if ((65<=ascii<=90 ) && (q[l].res[0]=='T') ){
                     fprintf(fp,"MOV AX, %s\n",q[l].op2);
                     fprintf(fp,"CMP AX,t[%c] \n",q[l].res[1]);
                     fprintf(fp,"JNZ etiquette %s\n",q[l].op1);
          }else if(65<=ascii<=90 ){
                       fprintf(fp,"MOV AX, %s\n",q[l].op2);
                       fprintf(fp,"CMP AX,%s \n",q[l].res);
                       fprintf(fp,"JNZ etiquette %s\n",q[l].op1);
                                      }
                
          else if ((48<=ascii<=57 ) && (q[l].res[0]=='T') ){ 
               fprintf(fp,"CMP %s,t[%c] \n",q[l].op2,q[l].res[1]);
               fprintf(fp,"JNZ etiquette %s\n",q[l].op1);
          }else if (48<=ascii<=57 ){
              fprintf(fp,"CMP %s,%s \n",q[l].op2,q[l].res);
               fprintf(fp,"JNZ etiquette %s\n",q[l].op1);
                                }
       }  
       }

                                              } 
                                                    fprintf(fp,"FIN :\n");
	                                                  fprintf(fp,"MOV AH,4CH\n");
	                                                  fprintf(fp,"INT 21h\n");
                                                   	fprintf(fp,"CODE ENDS\n");
                                                   	fprintf(fp,"END MAIN\n");    
                                                        
                                                        fclose(fp);
                                                         
}
