#include <iostream>

using namespace std;

float calcIMC(float peso, float alt){
	float IMC;
	IMC=peso/(alt*alt);
	return IMC;
	
}
void classIMC(float imc){
	if (imc<22)
		cout<<"Magrelo!";
	else if (imc<=27)
		cout<<"Ideal!";
	else
		cout<<"Gorducho!";
}

//=-=-= CORPO PRINCIPAL=-=-=

int main(){
	float peso, altura, IMC;
	
	cout<<"Peso: ";
	cin>>peso;
	
	cout<<"altura(metros): ";
	cin>>altura;
	
	IMC=calcIMC(peso,altura);
	cout<<"IMC total de "<<IMC<<", ou seja, vc esta ";
	//pode usar o 'endl' para quebrar a linha, assim ficando mais apresentavel o programa.
	classIMC(IMC);
	
}
