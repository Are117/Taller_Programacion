#include <stdio.h> //Se incluye libreria estandar

int main(){

int repeticiones; //Variable para almacenar las repeticiones

//Muestra mensaje descriptivo y pide ingresar el numero de repeticiones
printf("Contar cuantos numeros primos hay desde 1 hasta n\n");
printf("Por favor ingrese el numero limite(n)\n");
scanf("%d", &repeticiones);

int contador=0; //Variable para contar los numeros primos

printf("Los numeros primos son:\n");

//uso de la estructura do while para calcular la cantidad de numeros primos y cuales son
int i= 2;
do{
int contador1=0; //Variable para contar las veces que el numero dividido por otro tiene residuo 0

int j=2;
//uso de la estructura do while para calcular el numero primo 
    do{
if(i%j==0){
        contador1 += 1;
    }
    j++;
    }while(j<=i);

    //Determino en caso que el numero de repeticiones sea menor a 2 para establecer en 0 la cantidad de numeros primos
    if(repeticiones<2){
    contador=0;
    printf("%d\n", contador);
    }else{
    //uso de la estructura if para determinar si es primo o no, imprime el numero primo actual y aumenta 1 al contador de numeros primos
    if(contador1<=1){
        printf("%d\n", i);
        contador +=1;
    }
    }
i++;
}while(i<=repeticiones);


//imprime la cantidad de numeros primos que hay 
printf("Entre el 1 y el %d hay %d numeros primos", repeticiones, contador);
    return 0;
}