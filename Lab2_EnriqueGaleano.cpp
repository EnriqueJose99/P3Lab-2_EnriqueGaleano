#include <iostream>
#include <cstdlib>




using namespace std;

//Menu
int menu();

//Numero Triangular

int numeroTriangular(int);

//Numero Trinagular Random
int numeroTriangularRandom(int);

//Area del triangulo


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
				   }
				break;
			case 2:
				break;
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
