/* Pacheco Refugio Alan Ivan | Practica 2 Versión 2.0 | Paradigmas de Programación */

#include<stdio.h>
#include<math.h>
#include<time.h>
#include<string.h>

#define MAX	10	// Tamaño de la Lista1 de numeros
#define MAX1 10 // Tamaño de la Lista2 de numeros

// Estructura de datos usada para la Lista1
struct Lista1 {
	int numero;
}; 

// Estructura de datos usada para la Lista2
struct Lista2 {
	int numero2;
};

// Declaración del arreglo para almacenar los Numeros en la Lista1
struct Lista1 Lista1Numeros[MAX];
int numElementos = 0; // Numero con el que comienza la Lista1

// Declaración del arreglo para almacenar los Numeros en la Lista2
struct Lista2 Lista2Numeros[MAX1];
int numElementos2 = 0; // Numero con el que comienza la Lista2

// Función para insertar un Numero a la Lista1
void insertarNumero1() {
	if (numElementos < MAX) {
		struct Lista1 nuevoNumero;
		printf("Numero para Lista1: ");
		scanf("%d", &nuevoNumero.numero);
		
		Lista1Numeros[numElementos] = nuevoNumero;
		numElementos++;
		
		printf("Numero agregado correctamente a Lista1\n");
	}
	else {
		printf("La Lista1 está llena, no es posible agregar más Numeros :(\n");
	}
}

// Función para insertar un Numero a la Lista2
void insertarNumero2() {
	if (numElementos2 < MAX1) {
		struct Lista2 nuevoNumero2;
		printf("Numero para Lista2: ");
		scanf("%d", &nuevoNumero2.numero2);
		
		Lista2Numeros[numElementos2] = nuevoNumero2;
		numElementos2++;
		
		printf("Numero agregado correctamente a Lista2\n");
	}
	else {
		printf("La Lista2 está llena, no es posible agregar más Numeros :(\n");
	}
}

// Función para mostrar todos los Numeros en la Lista1
void mostrarNumeros1() {
	printf("\nCantidad de Numeros en la Lista1: %d\n", numElementos);
	printf("Lista1 de Numeros: \n");
	for (int i = 0; i < numElementos; i++) {
		printf("Numero: %d\n", Lista1Numeros[i].numero);
	}
}

// Función para mostrar todos los Numeros en la Lista2
void mostrarNumeros2() {
	printf("\nCantidad de Numeros en la Lista2: %d\n", numElementos2);
	printf("Lista2 de Numeros: \n");
	for (int i = 0; i < numElementos2; i++) {
		printf("Numero: %d\n", Lista2Numeros[i].numero2);
	}
}

// Función para encontrar el Numero maximo en la Lista1                            Funcion hecha con ayuda de IAS y foros
int encontrarMaximoLista1() {
	int maximo = Lista1Numeros[0].numero;
	for (int i = 1; i < numElementos; i++) {
		if (Lista1Numeros[i].numero > maximo) {
			maximo = Lista1Numeros[i].numero;
		}
	}
	return maximo;
}

// Función para encontrar el Numero minimo en la Lista1								Funcion hecha con ayuda de IAS y foros
int encontrarMinimoLista1() {
	int minimo = Lista1Numeros[0].numero;
	for (int i = 1; i < numElementos; i++) {
		if (Lista1Numeros[i].numero < minimo) {
			minimo = Lista1Numeros[i].numero;
		}
	}
	return minimo;
}

// Función para encontrar el numero maximo en la Lista2								Funcion hecha con ayuda de IAS y foros
int encontrarMaximoLista2() {
	int maximo = Lista2Numeros[0].numero2;
	for (int i = 1; i < numElementos2; i++) {
		if (Lista2Numeros[i].numero2 > maximo) {
			maximo = Lista2Numeros[i].numero2;
		}
	}
	return maximo;
}

// Función para encontrar el numero minimo en la Lista2
int encontrarMinimoLista2() {
	int minimo = Lista2Numeros[0].numero2;
	for (int i = 1; i < numElementos2; i++) {
		if (Lista2Numeros[i].numero2 < minimo) {
			minimo = Lista2Numeros[i].numero2;
		}
	}
	return minimo;
}

// Función para calcular la suma de ambas listas
int sumaListas() {
	int suma = 0;
	for (int i = 0; i < numElementos; i++) {
		suma += Lista1Numeros[i].numero;
	}
	for (int i = 0; i < numElementos2; i++) {
		suma += Lista2Numeros[i].numero2;
	}
	return suma;
}

int main () {
	int opcion;
	
	do{
		printf("\n\n ---------- Menu ----------\n\n");
		printf("1) Insertar nuevo nmero en la Lista1\n");
		printf("2) Mostrar todos los elementos de la Lista1\n");
		printf("3) Insertar nuevo numero en la Lista2\n");
		printf("4) Mostrar todos los elementos de la Lista2\n");
		printf("5) Numero maximo y minimo de la Lista1\n");
		printf("6) Numero maximo y minimo de la Lista2\n");
		printf("7) Suma de ambas listas\n");
		printf("8) Tiempo de ejecucion del programa\n");
		printf("9) Salir\n");
		printf("\nSeleccione una opcion por favor: ");
		scanf("\n%d", &opcion);
		
		switch (opcion){
			case 1:
				insertarNumero1();
				break;
			case 2:
				mostrarNumeros1();
				break;
			case 3:
				insertarNumero2();
				break;
			case 4:
				mostrarNumeros2();
				break;
			case 5:
				printf("Numero maximo en Lista1: %d\n", encontrarMaximoLista1());
				printf("Numero minimo en Lista1: %d\n", encontrarMinimoLista1());
				break;
			case 6:
				printf("Numero maximo en Lista2: %d\n", encontrarMaximoLista2());
				printf("Numero minimo en Lista2: %d\n", encontrarMinimoLista2());
				break;
			case 7:
				printf("Suma de ambas listas: %d\n", sumaListas());
				break;
			case 8:
				printf("Tiempo de ejecucion del programa\n");
				// Código para calcular el tiempo de ejecucion
				break;
			case 9:
				printf("Saliendo del programa :)\n");
				break;
			default:
				printf("Seleccione una opción válida, por favor\n");
		}	
	} while (opcion != 9);
	
	return 0;	
}
