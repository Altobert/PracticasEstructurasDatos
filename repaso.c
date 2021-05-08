#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct persona{
    int edad;
    char nombre[10];
    char apellido[10];
    float estatura;
}; 
typedef struct persona Persona;


/*
Paso por valor
*/
int sumatoria(int n){
    int suma = 0;
    for(int j = 1; j <= n; j++){
        suma = suma + j;
    }
    return suma;
}

/*
Paso por referencia
*/
void sumatoria2(int *n, int i){
    int suma = 0;
    for(int j = 1; j <= i; j++){
        suma = suma+j;
    }
    *n = suma;
}


void rellenarArreglo(int largo, int * arreglo){
    for(int i = 0; i<largo; i++){
        arreglo[i] = i;
    }
}

void imprimirArreglo(int largo, int*arreglo){
    for(int i = 0; i<largo; i++){
        printf("valor: %d\n", arreglo[i]);
    }
}

void rellenarArregloBidimensional(int largo, int ancho, int** arreglo){
    for(int i = 0; i<largo; i++){
        arreglo[i] = (int*)malloc(sizeof(int)*ancho);
        for(int j = 0; j<ancho; j++){
            arreglo[i][j] = j;
        }
    }
}

void imprimirArregloBidimensional(int largo, int ancho, int** arreglo){
    for(int i = 0; i<largo; i++){
        for(int j = 0; j<ancho; j++){
            printf("Valor %d,%d: %d\n", i,j,arreglo[i][j]);
        }
    }
}

int main() {
    /*
    Paso por valor y paso por referencia
    */

    /*
    int n;
    printf("Ingrese un número: ");
    scanf("%d",&n );
    int a = sumatoria(n);
    printf("El número es: %d\n", a);
    sumatoria2(&n, 4);
    printf("El nuevo valor es: %d\n", n);
    */

    /*
    Arreglos y punteros
    */
    /*
    int tamano;
    printf("ingrese tamaño del arreglo: ");
    scanf("%d", &tamano);
    int * arreglo = (int*)malloc(sizeof(int)*tamano);
    rellenarArreglo(tamano, arreglo);
    imprimirArreglo(tamano, arreglo);

    int arreglo2[tamano];
    rellenarArreglo(tamano, arreglo2);
    imprimirArreglo(tamano, arreglo2);

    int ** arreglobidimensional = (int**)malloc(sizeof(int*)*3);
    rellenarArregloBidimensional(tamano, 3, arreglobidimensional);
    imprimirArregloBidimensional(tamano, 3, arreglobidimensional);
    */

    /*Strings y caracteres*/
    /*
    char nombre[5] = "Juan";
    printf("Mi nombre es: %s\n", nombre);
    char apellido[15];
    printf("Ingresa tu apellido: ");
    scanf("%s", apellido);
    printf("Tu apellido es: %s\n", apellido);
    */

    /*Estructuras*/
    /*
    Persona p;
    strcpy(p.nombre, "Juan");
    strcpy(p.apellido, "Fernandez");
    p.edad = 23;
    p.estatura = 1.74;
    

    printf("Nombre: %s\n Apellido: %s\n Edad: %d\n Estatura: %f\n", p.nombre, p.apellido, p.edad, p.estatura); 
    */
    return 0;
}