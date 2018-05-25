#include "damasclase.h"
#include <iostream>

using namespace std;

damasclase::~damasclase(){
   freestructures();
}

bool damasclase::validacion(int fila,int columna){
        if(matrix[fila][columna]==' '){
                return true;
        }else{
                return false;
        }
}



