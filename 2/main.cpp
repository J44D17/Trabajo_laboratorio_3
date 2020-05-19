#include<iostream>

using namespace std;

void invertir(int *,int);
int recursiva(int *,int);
void muestradear(int *,int);
void cambiar(int &, int &);

int main(){
    int num[]={1,2,3,4,5,6,7,8,9},size=9;
    int *ar=num;
    recursiva(ar,size);
    muestradear(ar,size);
    invertir(ar,size);
    muestradear(ar,size);
	return 0;
}

void invertir(int *ar,int size){
	for(int i=0;i<(size+1)/2;i++)
	    cambiar(*(ar+i),*(ar+size-i-1));
}

int recursiva(int *ar,int size){
    if (size>0) {
        cambiar(*(ar+0),*(ar+size-1));
        recursiva(ar+1, size-2);
    }
}

void muestradear(int *ar,int size){

    for(int j=0;j<size;j++)
    	cout<<*(ar++)<<",";
}

void cambiar(int &n1, int &n2){
    int x=n1;
    n1=n2;
    n2=x;
}
