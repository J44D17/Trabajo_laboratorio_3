#include<iostream>

using namespace std;

int tamano(char *);
int recursiva(char *);
int main(){

	char *cadena=new char[100];
	cout<<"Ingresar cadena: ";cin.getline(cadena,100);
	cout<<tamano(cadena)<<endl;

	cout<<recursiva(cadena)<<endl;

	return 0;
}

int tamano(char *cade){
	int cont=0;
	while(*cade++)
	    cont++;
	return cont;
}

int recursiva(char *cade){
	return *(cade++)=='\0' ? 0 : 1+tamano(cade);
}
