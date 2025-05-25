#include <iostream>
#include <fstream>
#include <locale.h>
using namespace std;

string converteNome(string n){
	
	string nome = n;
	string nomeF;
	
	int posicao = nome.rfind(' ');
	
	for(int i = posicao + 1; i < nome.length(); i++){
		char c = nome[i];
		nomeF += c;
	}
	
	nomeF += ", ";
	
	for(int i = 0; i < posicao; i++){
		char c = nome[i];
		nomeF += c;
	}
	
	return nomeF;
}

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "");
	
	ifstream arq("nomes.txt");
	string linha;
	string nome;
	
	if (arq.is_open())
	{
		while (!arq.eof())
		{
			getline(arq, linha);
   		    cout << converteNome(linha) << endl;
		}
		arq.close();
	}	
	else
	{
		cout << "Problemas com o arquivo";
	}
	
	return 0;
}