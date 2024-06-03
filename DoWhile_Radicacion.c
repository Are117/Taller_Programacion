#include <stdio.h> //Inclusión de libreria estandar

int main(){
    int radicando; //Variable para almacenar el radicando
    printf("Por favor ingrese el valor de la raiz cubica que desea calcular\n");
    scanf("%d", &radicando);

int indice=3; //Variable para almacenar el indice
int raiz=0; //Variable para almacenar la raiz
int resultado1=0; //Variable para almacenar el resultado 1 
int resultado2=0; //Variable para almacenar el resultado 2
int resultadofinal=1; //Variable para almacenar el resultado final

int i=1; 
//Uso de la estructura do while para calcular la radicación y el resultado final
do{
int j=1;
//uso de la estructura do while para calcular el resultado 1
    do{
    resultado1 +=i;
    j++;
    }while(j<=i);

    int k=1;
    //uso de la estructura do while para calcular el resultado 2
        do{
        resultado2 += resultado1;
         k++;
        }while(k<=i);

resultadofinal= radicando-resultado2;
raiz=i;
resultado1=0;
resultado2=0;
i++;
}while(resultadofinal>0);

//muestra el resultado de la raiz cubica
    printf("La raíz cúbica de %d es: %d", radicando, raiz);
    return 0;
}
