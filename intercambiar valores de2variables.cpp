//escribe un fragmento de programa que intercambie los valores
// de dos variables

#include<iostream>
using namespace std;

int main(){
	int x,y,aux;
	
	cout<<"digite el valor de x: "; cin>>x;
	cout<<"digite el valor de y: "; cin>>y;
	
	
	
	
	aux=x;
	x=y;
	y=aux;
	
	cout<<"el valor de x: "<<x<<endl;
	cout<<"el valoe de y: "<<y;
	
	return 0;
}
