#include <iostream>
#include <cstdlib>
#include <math.h>
#include <cmath>


using namespace std;


#define PI 3.14159265
//Menu
int menu();

//Numero Triangular

int numeroTriangular(int);

//Numero Trinagular Random
int numeroTriangularRandom(int);

//Area del triangulo
double areaTriangulo(double, double, double);

//Formula s

double formulaS(double, double, double);

//Angulo alpha 
double anguloA(double, double, double);

//Angulo betta
double anguloB(double, double, double);

//Angulo Gamma
double anguloG(double, double, double);

//Comparacion 
double compracionDe180(double, double, double);

//TODO:: numero triangular previo

int main(){
	int option = 0;
	int numeroVerificacion = 0;
	while(option != 4){
		switch(option = menu()){
			case 1:{
					    int randomNumber = 0;
						cout<<"Entro al ejercicio 1 "<<endl;
						cout<<"--------------------------"<<endl;
						cout<<"Parte numero 1"<<endl;
						cout<<"Ingrese un numero para ver si su numero es triangular: "<<endl;
						cin>>numeroVerificacion;
						numeroTriangular(numeroVerificacion);
						cout<<"--------------------------"<<endl;
						cout<<"Parte numero 2"<<endl;
						randomNumber = rand() % 100 + 1;
						cout<<"El numero radom es: "<<randomNumber<<endl;
						numeroTriangularRandom(randomNumber);
						break;
				   }
			case 2:{
						double ladOA = 0, ladOB = 0, ladOC = 0;
						cout<<"Ingrese lado a: "<<endl;
						cin >> ladOA;
						cout<<"Ingrese lado b: "<<endl;
						cin >> ladOB;
						cout<<"Ingrese lado c: "<<endl ;
						cin >> ladOC;
						//formulaS(ladOA, ladOB, ladOC);
						cout<<"La respuesta de la formula s es: "<<formulaS(ladOA, ladOB, ladOC)<<endl;
						cout<<"-------------------------"<<endl;
						cout<<"Formula de Area "<<endl;
						areaTriangulo(ladOA, ladOB, ladOC); 
						cout<<"-----------------------------"<<endl;
						cout<<"Angulos del triangulo"<<endl;
						cout<<"Angulo Alpha: "<<anguloA(ladOA,ladOB,ladOC)<<endl;
						cout<<"Angulo Betta: "<<anguloB(ladOA,ladOB,ladOC)<<endl;
						cout<<"Angulo Gamma: "<<anguloG(ladOA,ladOB,ladOC)<<endl;
						cout<<"-----------------------------"<<endl;
						cout<<"Si es Rectangular o NO"<<endl;
						compracionDe180(ladOA, ladOB, ladOC);
						break;
				   }
			case 3:
				break;
		}
	}
	return 0;
}


int menu(){
	int bandera = 0;
	int numeroRespuesta = 0;
	while(bandera == 0){ 
		cout<<"**********Menu**********"<<endl;
		cout<<" 1. Ejercicio de Numeros Triangulares "<<endl;
		cout<<" 2. Ejercicio de Triangulo "<<endl;
		cout<<" 3. Ejercicio de Numeros Catalan "<<endl;
		cout<<" 4. Salir"<<endl;
		cout<<" Ingrese numero para ingresar a una opcion: "<<endl;
		cin>>numeroRespuesta;

		if(numeroRespuesta>= 1 && numeroRespuesta<=4){
			return numeroRespuesta;
		}else{
			cout<<"Numero invalido las opciones van de 1 a 4";
		}
	}

}

//funcion de numero triangular
int numeroTriangular(int numeroTriangular){
	int numeroX = 0;
	int centinela1 = 0; 
	do{
		centinela1++;
		numeroX = (centinela1*(centinela1+ 1)/2);
		
	}while(numeroTriangular > numeroX);
	
	if(numeroTriangular == numeroX){
		cout<<"Su numero es triangular"<<endl;
		return numeroX;
		
	}else{
		cout<<"Su numero no es triangular"<<endl;
	}

}

//funcion de numero triangular Random
int numeroTriangularRandom(int randomNumber){
	int numeroRandom = 0;
	int centinela2 = 0;
	do{
		centinela2++;
		numeroRandom = (centinela2*(centinela2+1)/2);
													
	}while(randomNumber > numeroRandom);
	if(randomNumber==numeroRandom){
		cout<<"El numero random es triangular"<<endl;
		return numeroRandom;
	}else{
		cout<<"El numero random no es triangular"<<endl;
	}
	
}

//Formula S

double formulaS(double ladoA, double ladoB, double ladoC){
	int s = 0;
	int suma = 0;
	s = (ladoA + ladoB + ladoC)/2;
	suma = ladoA + ladoB + ladoC;
	return s;
}


//Formula de Area 
double areaTriangulo(double ladoa, double ladob, double ladoc){
	double area = 0;
	double restaA = 0;
	double restaB =0;
	double restaC = 0;
	double contiene = 0;
	restaA = (formulaS(ladoa, ladob, ladoc) - ladoa);
	restaB = (formulaS(ladoa, ladob, ladoc) - ladob);
	restaC = (formulaS(ladoa, ladob, ladoc) - ladoc);

    cout<<"La resta del lado A "<<restaA<<endl;
	cout<<"La resta del lado B "<<restaB<<endl;
	cout<<"La resta del lado C "<<restaC<<endl;
	
	area =  sqrt((formulaS(ladoa,ladob,ladoc))*(restaA)*(restaB)*(restaC));
	cout<<"El area es: "<<area<<endl;


	return area;
}


//Angulo alpha

double anguloA(double ladosa, double ladosb, double ladosc){
	double anguloa = 0;
	anguloa = acos(((pow(ladosb,2)) + ((pow(ladosc, 2)) - (pow(ladosa, 2)))) / (2*ladosb*ladosc)) * 180/PI; 	
	return anguloa;
}

//Angulo betta 
double anguloB(double ladosa, double ladosb, double ladosc){
	double angulob = 0;
	angulob = acos(((pow(ladosa,2)) + ((pow(ladosc, 2)) - (pow(ladosb, 2)))) / (2*ladosa*ladosc)) * 180/PI;
	return angulob;
}

//Angulo Gamma
double anguloG(double ladosa, double ladosb, double ladosc){
	double angulog = 0;
	angulog = 180 - anguloA(ladosa,ladosb,ladosc) -  anguloB(ladosa,ladosb,ladosc);
	return angulog;
}
//Comparacion de 180 
double compracionDe180(double ladosA, double ladosB, double ladosC){
	if((anguloA(ladosA, ladosB, ladosC)) || (anguloB(ladosA, ladosB, ladosC))|| (anguloG(ladosA, ladosB, ladosC))){
		cout<<"Es un Triangulo Rectangular"<< endl;
	}else{
		cout<<"El Triangulo no es Rectangular"<<endl;
	}
}


