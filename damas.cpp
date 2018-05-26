#include "damasclase.h"
#include <iostream>
#include <stdlib.h>
using namespace std;

char charb = 'B';
char charn = 'N';
/*char llenartablero(char matrix){
	
   for(int i=0;i<SIZE;i++){
       for(int j=0;j<SIZE;j++){
	   if(i<3 && ((i+j)%2==0))
		matrix[i][j] = 'B';
    	   else if((i > 4) && ((i + j) % 2 == 0))
		    matrix[i][j] = 'N';
	   else
		matrix[i][j] = ' ';
       }
   }
  
}*/


void imprimirtablero(){
   for(int i=0;i<SIZE;i++){
	if(i = 0){
	   for(int j=0; j<SIZE;j++){
	       
	   }
        }	
   }
}





int main(){
   char matrix[8][8];
   
   cout<<"Las coordenadas se manejan:"<<endl;
   cout<<"De arriba a abajo de 0 a 7"<<endl;
   cout<<"De izquierda a derecha de 0 a 7"<<endl;
    for(int i=0;i<SIZE;i++){
       for(int j=0;j<SIZE;j++){
           if(i<3 && ((i+j)%2==0))
                matrix[i][j] = 'B';
           else if((i > 4) && ((i + j) % 2 == 0))
                    matrix[i][j] = 'N';
           else
                matrix[i][j] = ' ';
       }
    }
    for(int i=0;i<SIZE;i++){
        for(int j=0; j<SIZE;j++){
        cout<<matrix[i][j]; 
           }cout<<endl;
        }
    cout<<"Ingrese ";
   
  // matrix = llenartablero(matrix);
   
   
   return 0;
}
