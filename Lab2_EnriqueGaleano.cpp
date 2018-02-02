#include <iostream>



using namespace std;

//Menu
int menu();

//Numero Triangular

int numeroTriangulares(int);


int main(){
	int option = 0;
	int numeroVerificacion = 0;
	while(option != 4){
		switch(option = menu()){
			case 1:
				cout<<"Entro al ejercicio 1 ";
				cout<<"Ingrese un numero para ver si su numero es triangular: ";
				cin>>numeroVerificacion;
				numeroTriangulares(numeroVerificacion);
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
int numeroTriangulares(int numeroTriangular){
	int numeroX = 0;
	int i = 0;
	do{
		i++;
		numeroX = (i*(i+ 1)/2);
		cout<<numeroX;
	}while(numeroTriangular > numeroX);
	
	if(numeroTriangular == numeroX){
		cout<<"Su numero es triangular"<<endl;
		return numeroX;
		
	}else{
		cout<<"Su numero no es triangular"<<endl;
	}

}
