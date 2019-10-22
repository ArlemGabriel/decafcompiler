#ifndef FUNCIONES_PARSER_H_INCLUDED
#define FUNCIONES_PARSER_H_INCLUDED

using namespace std;
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <iostream> 


class NodeParseTree
{
public:
	NodeParseTree()
	{
		parent = NULL;		        

		token = "";
        value = "";
        row = -1;
        column = -1;
	}

	NodeParseTree(string pToken, string pValue, int pRow, int pColumn)
	{
		parent = NULL;        		

		token = pToken;
		value = pValue;
		row = pRow;
		column = pColumn;
	}

    NodeParseTree(string pToken, string pValue, int pRow, int pColumn, vector<NodeParseTree*> pChilds)
	{
		parent = NULL;
        childs = pChilds;		

		token = pToken;
		value = pValue;
		row = pRow;
		column = pColumn;
	}

    void addData(string pToken, string pValue, int pRow, int pColumn, vector<NodeParseTree*> pChilds)
	{
		parent = NULL;
        childs = pChilds;		

		token = pToken;
		value = pValue;
		row = pRow;
		column = pColumn;
	}
/*
    void addChilds(vector<NodeParseTree*> *pChilds){
        childs = pChilds;
    }
*/
    void addChild(NodeParseTree *pChild){
        childs.push_back(pChild);
    }

    void addParent(NodeParseTree *pParent){
        parent= pParent;
    }

	string token;
    string value;

    int row;
    int column;
    NodeParseTree *parent;
	std::vector<NodeParseTree*> childs;

};

typedef NodeParseTree * pNodeParseTree;

pNodeParseTree newNode(string pToken, string pValue, int pRow, int pColumn){
    return new NodeParseTree(pToken, pValue, pRow, pColumn);	
}



#endif // FUNCIONES_PARSER_H_INCLUDED