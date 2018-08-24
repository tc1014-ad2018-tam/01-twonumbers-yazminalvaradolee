/*
 *Este programa es para sacar la suma, resta
 * multiplicación y división de dicho número.
 *
 * Autora: Yasmin Alvarado Lee
 * Fecha: 22 de agosto del 2018
 * Correo: yazminalvlee@gmail.com
 */

#include <stdio.h>

int main() {
    //Declaración de variables
    double suma;
    double num1;
    double num2;
    double resta;
    double multiplicacion;
    double division;


    //Aquí le pido al usuario las 2 variables para
    //sacar la suma, la resta, la multiplicación y la división
    //de las variables
    printf("Bienvenido te ayudare a sacar la suma, resta, multiplicación y división\n");
    printf("Dame la primer variable: ");
    scanf("%lf", &num1);
    printf("Dame la segunda variable: ");
    scanf("%lf", &num2);
    //Aquí calculamos la primera operación que es la suma
    suma = (num1 + num2);
    // suma = suma1 + suma 2

    //Aqui calcularemos la segunda operación que es la resta
    resta = (num1 - num2);
    // resta = resta1 - resta2

    //Aqui calcularemos la tercera operacion que es la multiplicación
    multiplicacion = (num1 * num2);
    // multiplicación = multiplicación1 * multiplicación 2

    //Aquí calcularemos la cuarta operación que es la división
    division = (num1 / num2);
    // división = division1 / división2

    //Aquí le muestro los resultados de dichas operaciones al usuario
    printf("La suma es: %lf\n", suma);
    printf("La resta es: %lf\n", resta);
    printf("La multiplicación es %lf\n", multiplicacion);
    printf("La división es %lf\n", division);

    return 0;
}