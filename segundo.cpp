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
		cout<<"N�o h� divis�o por 0(Zero)"<<endl;
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
	cout<<"A subtra��o "<<a<<"-"<<b<<" = "<<sub(a,b)<<"\n";
	cout<<"A multiplicacao "<<a<<"*"<<b<<" = "<<mult(a,b)<<"\n";
	cout<<"A divis�o "<<a<<"/"<<b<<" = "<<div(a,b)<<endl;
}
