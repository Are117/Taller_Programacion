#include <stdio.h> //Inclusión de libreria estandar

int main(){

int repeticiones; //Variable para almacenar numero de repeticiones

//muestra un mensaje descriptivo y pide ingresar numero de repeticiones
printf("Ingrese el numero cuyo factorial desea calcular\n");
scanf("%d", &repeticiones);

int sumaFactorial=0; //Variable para almacenar la suma de los factoriales
int factorial=0; //Variable para almacenar los factoriales

//uso de la estructura for para calcular el factorial de cada numero hasta el numero de repeticiones
for(int i=1; i<=repeticiones; i++){
    factorial=1;

    //uso de la estructura for para calcular la suma de los factoriales
    for(int j=i; j>0; j--){

        factorial *=j;
    }
    sumaFactorial += factorial;
}
//Mostrar la suma de los factoriales
printf("La suma de factoriales desde 1! hasta %d! es: %d", repeticiones, sumaFactorial);
    return 0;
}