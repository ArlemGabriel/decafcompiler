#include "funciones.h"

ParseTree::~ParseTree()                         //Destructor
{
	actual = NULL;
}

void ParseTree::newNode(string pToken, string pValue, int pRow, int pRow){
	if (isVoid()){
		rootTree = new NodeParseTree(pToken, pValue, pRow, pRow);
		rootTree->hizq = NULL;
		rootTree->hder = NULL;		
	}
	else{
		NodeParseTree * aux = rootTree;
		encontrarCliente(pCedula, pNombre, pDireccion, pTel, aux);
	}


}
