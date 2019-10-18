/*
ParseTree::~ParseTree()                         //Destructor
{
	actual = NULL;
}

void ParseTree::newNode(string pToken, string pValue, int pRow, int pColumn){
	if (isVoid()){
		rootTree = new NodeParseTree(pToken, pValue, pRow, pColumn);	
	}
	else{
		NodeParseTree * aux = rootTree;
		//encontrarCliente(pCedula, pNombre, pDireccion, pTel, aux);
	}


}


void ArbolCliente::encontrarCliente(string pCedula, string pNombre, string pDireccion, string pTel, NodoCliente * pAux){
	if (atoi(pCedula.c_str()) <= atoi(pAux->cedula.c_str())){
		if (pAux->hizq == NULL){
			pAux->hizq = new NodoCliente(pCedula, pNombre, pDireccion, pTel);			
		}
		else{
			pAux = pAux->hizq;
			encontrarCliente(pCedula, pNombre, pDireccion, pTel, pAux);
		}
	}
	else{
		if (pAux->hder == NULL){
			pAux->hder = new NodoCliente(pCedula, pNombre, pDireccion, pTel);			
		}
		else{
			pAux = pAux->hder;
			encontrarCliente(pCedula, pNombre, pDireccion, pTel, pAux);
		}
	}
}*/