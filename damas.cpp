#include "damasclase.h"
#include <iostream>

using namespace std;

void llenartablero(){
   for(int i=0;i<SIZE;i++){
       for(int j=0;j<SIZE;j++){
	   if(i<3 && ((i+j)%2==0)
		matrix[i][j] = "B";
    	   else if((i > 4) && ((i + j) % 2 == 0))
		    matrix[i][j] = 'N';
	   else
		matrix[i][j] = ' ';
       }
   }
}

void imprimirtablero(){
   for(int i=0;i<SIZE;i++){
	
   
   }
}

int main(){
   //int Tabla** matrix = new Tabla[8][8];
   char tabla** = new matrix[8][8];


   
   
   
   
   return 0;
}
