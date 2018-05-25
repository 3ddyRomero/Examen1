#ifndef DAMASCLASE_H
#define DAMASCLASE_H

#define SIZE 8
#define MAXHISTORY 64

class char damasclase(){
	private:
	    char** areajuego;
	    char*** historialjuego;
	    int historialesguardados;
	    char** createcharMatrix();
            void printMatrix(char**);;
	    

	public:
	    damasclase();//constructor vacio
	    void createstructures//instanciar Matrices
	    
	    void piezaB();
	    void piezaN();
	    void validacion(int,int);//validar Movimiento

	    ~damasclase();//destructor

};
#endif
