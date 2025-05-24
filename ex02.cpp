#include <iostream>
#include <windows.h>
#include <locale.h>


using namespace std;

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "");
	
	cout << "Digite uma mensagem:" << endl;
	
	string msg;
	string msgLimpa;
	string reversed;
	
	getline(cin, msg);
	
	for(int i = 0; i < msg.length(); i++) {
	    char c = msg[i];
	    if(c != ' ') {
	        msgLimpa += tolower(c);
	    }
	}
	
	cout << msgLimpa << endl;

	for(int i = msgLimpa.length() - 1; i >= 0; i--) {
	    char c = msgLimpa[i];
	        reversed += tolower(c);
	}
	
	if(msgLimpa.compare(reversed) == 0){
		cout << "É um palindromo" << endl;
	}else{
		cout << "Não é um palindromo" << endl;
	}
		
	return 0;
}