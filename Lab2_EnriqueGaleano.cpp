#include <iostream>
#include <cstdlib>
#include <math.h>
#include <cmath>


using namespace std;


#define PI 3.14159265
//Menu
//int menu();

//Numero Triangular
int numeroTriangular(int);

//Numero Trinagular Random
int numeroTriangularRandom(int);

//Numero Triangular Previo
int numeroTriangularPevio(int);

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

//Factorial 
int factorial(int);

//Funcion de 3 ejercicio

long int tercerEjrcicio(long int);

int main(){
	int option = 0;
	int numeroVerificacion = 0;
	//while(option != 4){
		cout<<"Ingrese numero para opcion: ";
		cin >> option;
		cout<<"Ejercicio 1"<<endl;
		cout<<"Ejercicio 2"<<endl;
		cout<<"Ejercicio 3" <<endl;
		if(option == 1){
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
			
			
			cout<<"-------------------------";
						
			cout<<"Parte numero 3"<<endl;
			cout<<"El numero triangular Previo"<<numeroTriangularPevio(numeroVerificacion);
		}
		if(option == 2){
			double ladOA = 0, ladOB = 0, ladOC = 0;
			double a = 0, b = 0, c = 0;
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
			a = anguloA(ladOA,ladOB,ladOC);
			b = anguloB(ladOA,ladOB,ladOC);
			c = anguloG(ladOA,ladOB,ladOC);
			//compracionDe180(a,b,c);
			cout<<"-----------------------------"<<endl;
			cout<<"Si es Rectangular o NO"<<endl;
			compracionDe180(a, b, c);
		}
		if(option == 3){
			int fact = 0;
			cout<<"Ingrese un numero de factorial: " << endl;
			cin >> fact;
			tercerEjrcicio(fact);
			

		}
			
	return 0;
}


/*int menu(){
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

		//if(numeroRespuesta>= 1 && numeroRespuesta<=5){
			return numeroRespuesta;
	//	}else{
	//		cout<<"Numero invalido las opciones van de 1 a 4";
	//	}
	}

}*/

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
		cout<<"Su numero no es Triangular";
	}


}
//Numero Triagular Previo
int numeroTriangularPevio(int numeroPrevio){
	int numeroX = 0;
	int centinela1 = 0; 
	/*do{
		centinela1++;
		numeroX = (centinela1*(centinela1+ 1)/2);		

	}while(numeroTriangular > numeroX);
	
	if(numeroTriangular != numeroPrevio){
		numeroTriangularPevio(numeroPrevio - 1);
		cout<<"El numero previo es";
		return numeroTriangularPevio;
	}*/
	for(int i=1;i<numeroPrevio;i++){
		centinela1= centinela1+i;
		if(centinela1 == numeroPrevio){
			cout<<"El numero triangular" <<numeroPrevio<<endl;
			break;
			
		}
	}
	if(centinela1 != numeroPrevio){
		numeroTriangularPevio(numeroPrevio- 1);
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
	if(ladosA == 90 || ladosB == 90 || ladosC == 90){
		cout<<"Es un Triangulo Rectangular"<< endl;
	}else{
		cout<<"El Triangulo no es Rectangular"<<endl;
	}
}

//Factorial

int factorial(int factorial){
	int centin = 1;
	int factor = 0;
	for(int i=1;i<factorial;i++){
		centin = factor *i;
	}
	cout<<"El factorial del numero es: " <<centin;
}

//tercer ejrcicio

long int tercerEjrcicio(int fact){
	long int numeroParaCalcular = 0;
	for(int i=0;i<fact;i++){
		if(i == 0){
			cout<<1<<endl;
		}else{
			numeroParaCalcular = ((factorial(2*i))/((factorial(i +1))*(factorial(i))));
		}
	}

}
