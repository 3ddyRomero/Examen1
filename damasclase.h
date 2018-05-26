#ifndef DAMASCLASE_H
#define DAMASCLASE_H

#define SIZE 8
#define MAXHISTORY 64

class damasclase{
	private:
            char letra;
	    char matrix[SIZE][SIZE]; 

	public:
	    damasclase();//constructor vacio
	    void createstructures();//instanciar Matrices
	    
	    void piezaB(char);
	    void piezaN(char);
	    void validacion(int,int);//validar Movimiento

	    ~damasclase();//destructor

};
#endif
