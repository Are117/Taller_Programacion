#include  <stdio.h> //Incluimos libreria estándar

int main(){
int cubo=0; //Variable para almacenar los cubos
int sumaCubos=0; //Variable para almacenar la suma de los cubos
int repeticiones; //Variable para almacenar el numero de repeticiones 

//muestra mensaje descriptivo y pide al usuario ingresar el numero de repeticiones
printf("Vamos a calcular la suma de los cubos de los primeros n numeros\n");
printf("Por favor ingresa la cantidad de cubos que quieres que se sumen\n");
scanf("%d", &repeticiones);

//Uso de la estructura do while para calcular el cubo de cada numero y posteriormente la suma de todos ellos
int i=1;
do{
cubo=i*i*i;
sumaCubos +=cubo;
i++;
}
while(i<=repeticiones);


//muestra en pantalla la suma de los cubos
printf("La suma de los cuadrados de los primeros %d numeros es: %d", repeticiones, sumaCubos);
    return 0;
}