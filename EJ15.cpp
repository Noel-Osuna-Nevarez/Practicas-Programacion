//Noel Osuna Nevare 24041037 
#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int X, int Y) {
		COORD coord;
		coord.X = X;
		coord.Y = Y;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	cout<< "Hola,esta es una prueba de la funcion gotoxy."<< endl;
	gotoxy(1,1);
	cout<<"Este letrero empieza en la posicion (1,1).";
	gotoxy(30,2);
	cout<<"Este letrero empieza en la posicion (30,2).";
	gotoxy(1,20);
	cout<<"Este letrero empieza en la posicion (1,20).";
	system("pause");
	system("cls");
	cout<<"                       Impresiona en las 4 esquinas";
	gotoxy(0,0);
	cout<<"*";
	gotoxy(80,0);
	cout<<"*";
	gotoxy(0,19);
	cout<<"*";
	gotoxy(80,19);
	cout<<"*";
	return 0;
}
