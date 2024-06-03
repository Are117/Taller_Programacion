#include <stdio.h> //Se incluye libreria estandar

int main(){

int repeticiones; //Variable para almacenar las repeticiones

//Muestra mensaje descriptivo y pide ingresar el numero de repeticiones
printf("Contar cuantos numeros primos hay desde 1 hasta n\n");
printf("Por favor ingrese el numero limite(n)\n");
scanf("%d", &repeticiones);

int contador=0; //Variable para contar los numeros primos

printf("Los numeros primos son:\n");

//uso de la estructura for para calcular la cantidad de numeros primos y cuales son
for(int i= 2; i<=repeticiones; i++){
    int contador1=0; //Variable para contar las veces que el numero dividido por otro tiene residuo 0

//uso de la estructura for para calcular el numero primo 
    for(int j=2; j<=i; j++){
    if(i%j==0){
        contador1 += 1;
    }
    }

//uso de la estructura if para determinar si es primo o no, imprime el numero primo actual y aumenta 1 al contador de numeros primos
    if(contador1<=1){
        printf("%d\n", i);
        contador +=1;
    }
  

}

//imprime la cantidad de numeros primos que hay 
printf("Entre el 1 y el %d hay %d numeros primos", repeticiones, contador);
    return 0;
}