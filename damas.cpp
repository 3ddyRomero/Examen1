#include "damasclase.h"
#include <iostream>

using namespace std;

char charb = 'B';
char charn = 'N';

void llenartablero(){
   for(int i=0;i<SIZE;i++){
       for(int j=0;j<SIZE;j++){
	   if(i<3 && ((i+j)%2==0)
		matrix[i][j] = " B ";
    	   else if((i > 4) && ((i + j) % 2 == 0))
		    matrix[i][j] = " ";
	   else
		matrix[i][j] = ' ';
       }
   }
}

void imprimirtablero(){
   for(int i=0;i<SIZE;i++){
	if(i = 0){
	   cout<<" ";
	   for(int j=0; j<SIZE;j++){
	       cout<<j;
	   }
        }	
   }
}

int mover(int x,int y){
   cout<<"Empieza blancas."<<endl;
   if(){
   
   }
   
}



int main(){
   //int Tabla** matrix = new Tabla[8][8];
   char tabla** = new matrix[8][8];


   
   
   
   delete matrix;
   return 0;
}
