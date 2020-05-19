#include<iostream>

using namespace std;

void copiar_cadena(char *,char *);

int main(){

    char *cadena=new char[100],*cadena2=new char[100];
	cout<<"Ingresar cadena: ";cin.getline(cadena1,100);
	cout<<"Ingresar cadena: ";cin.getline(cadena2,100);
	copiar_cadena(cadena1,cadena2);
	cout<<cadena2;

	return 0;
}


void copiar_cadena(char *cad1,char *cad2){
	while(*cad1)
	    *(cad2++)=(*cad1++);
	*cad2='\0';
}
