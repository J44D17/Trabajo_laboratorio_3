#include<iostream>

using namespace std;

int sum(int *);

int recursiva(int *);
int tamano=8;
int main(){
	int *numero=new int [8];

	int ar[]={1,2,3,4,5,6,7,8};

	numero=ar;

	cout<<"La suma es: "<<sum(numero)<<endl;
	cout<<"La suma es: "<<recursiva(numero)<<endl;
	return 0;
}

int sum(int *numero){
	int sum=0,i=0;
	for (i;i++<tamano;sum+=(*(numero++)));
	return sum;
}

int recursiva( int *numero){

	if(tamano--==1){
		return *(numero+0);
	}
	else
		return *(numero+tamano)+recursiva(numero);

}
