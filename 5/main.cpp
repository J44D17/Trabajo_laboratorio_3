#include<iostream>

using namespace std;

int tamano(char *);
void concatenar(char *,char *);
int main(){

	char *cadena1=new char[100],*cadena2=new char[100];
	cout<<"Ingresar cadena: ";cin.getline(cadena1,100);
	cout<<"Ingresar cadena: ";cin.getline(cadena2,100);
	cout<<cadena2<<endl;

	concatenar(cadena1,cadena2);
	cout<<cadena2<<endl;
	return 0;
}

void concatenar(char *cad1,char *cad2){
	while(*cad1)
	    *(cad2+tamano(cad2))=(*cad1++);
}

int tamano(char * cad){
	return *(cad++)=='\0' ? 0 : 1+tamano(cad);
}
