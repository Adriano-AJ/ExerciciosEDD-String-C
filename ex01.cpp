#include <iostream>
#include <windows.h>
#include <locale.h>


using namespace std;

void gotoxy(short x, short y)
{
	COORD coord = {x, y};
	SetConsoleCursorPosition( 
	   GetStdHandle (STD_OUTPUT_HANDLE), coord 
	                        );
}

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "");
	
	cout << "Digite uma mensagem:" << endl;
	string msg;
	cin >> msg;
	int linha = 5;
	int coluna = (80 - msg.length())/2;
	gotoxy(coluna,linha);
	cout << msg << endl;
	
	for(int c = 0; c < msg.length(); c++){
		for(int i = linha; i < 20; i++){
			gotoxy(coluna + c, i);
            cout << " " << endl;

            gotoxy(coluna + c, i + 1);
            cout << msg[c] << endl;
            Sleep(50);
		}
	}
	
	return 0;
}