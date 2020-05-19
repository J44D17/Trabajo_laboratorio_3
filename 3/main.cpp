#include<iostream>

using namespace std;

int *ordenar(int *,int);
void muestradear(int *,int);

int main(){
    int numero[]={1,4,2,3,5,8,5},size=7;

    int *ar=numero;

    ordenar(ar,size);

    muestradear(ar,size);
    return 0;
}

int *ordenar(int *ar,int tam){
	int i,pos,x;
	for(i=0;i<tam;i++){
		pos = i;
		x = *(ar+pos);
		while((pos>0) && (*(ar+pos-1) > x)){
			*(ar+pos) = *(ar+pos-1);
			pos--;
		}
		*(ar+pos) = x;
	}
    return ar;
}

void muestradear(int *ar,int size){
    for(int j=0;j<size;j++)
    	cout<<*(ar++)<<",";
}
