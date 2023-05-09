#include "iostream"
using namespace std;

float soma(float a, float b){
	return a+b;
}
float sub(float a, float b){
	return a-b;
}
float mult(float a, float b){
	return a*b;
}
float div(float a, float b){
	if(b==0){
		cout<<"Não há divisão por 0(Zero)"<<endl;
	}
	else{
		return a/b;
	}
}
main(){
	float a, b;
	
	cout<<"Inform a: ";
	cin>>a;
	cout<<"Informe b: ";
	cin>>b;
	
	cout<<"A soma "<<a<<"+"<<b<<" = "<<soma(a,b)<<"\n";
	cout<<"A subtração "<<a<<"-"<<b<<" = "<<sub(a,b)<<"\n";
	cout<<"A multiplicacao "<<a<<"*"<<b<<" = "<<mult(a,b)<<"\n";
	cout<<"A divisão "<<a<<"/"<<b<<" = "<<div(a,b)<<endl;
}
