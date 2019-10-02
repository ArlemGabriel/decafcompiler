#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

#include <vector>
#include <iostream>
#include "stdio.h"

using namespace std;
std::vector<int> linea;
std::vector<int> columna;
std::vector<string> token;
std::vector<string> valor;

void agregarfila(int plinea,int pcolumna,string ptoken,string pvalor)
{
    linea.push_back(plinea);
    columna.push_back(pcolumna);
    token.push_back(ptoken);
    valor.push_back(pvalor);
}

void imprimirtabla()
{
    int tamlinea = linea.size();
    int tamcolumna = columna.size();
    int tamtoken = token.size();
    int tamvalor = valor.size();

    if(tamlinea==tamcolumna && tamcolumna==tamtoken && tamtoken==tamvalor){

        printf("%-10s%-10s%-10s%-10s%%\n", "LINE", "COLUMN", "TOKEN", "VALUE");

        for(int i=0;i<linea.size();i++)
        {
            printf("%-10d%-10d%-10s%-10s\n",linea[i],columna[i],token[i].c_str(),valor[i].c_str());
        }
    }else{
        std::cout << "ERROR: No existe la misma cantidad de filas y columnas";
    }

}



#endif // FUNCIONES_H_INCLUDED
