
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <math.h>
#include <sys/types.h>

// [--------------------------------------------------------------------------------NIVEL 1--------------------------------------------------------------------------------]

// ----------------------------------------N1-1) Muestre los números de 1 a 100 de forma descendente.
/*
#define NUM_MAX 100

int main()
{
    for (int i = NUM_MAX; i >= 1; i--)
    {
        printf("%d ", i);
    }

    return 0;
}
*/
// ----------------------------------------N1-2) Muestre los números impares que hay entre 1 y 100.
/*

#define NUM_MAX 100

int main()
{
    for (int i = 1; i <= NUM_MAX; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d, ", i);
        }
    }
    return 0;
}

*/

// ----------------------------------------N1-3) Muestre la suma de todos los números impares que van del 1 al 100.
/*

#define NUM_MAX 100

int main()
{
    int sum = 0; // definir la variable donde se va a almacenar la suma de numeros impares

    for (int i = 1; i <= 100; i++) // Ciclo for para calcular de 1 a 100 los impares
    {
        if (i % 2 != 0) // Verifica si el numero actual es impar
        {
            sum += i; // Suma los numeros impares
        }
    }
    printf(" La suma de los numeros impares de 1 a 100 es: %d \n", sum); // Imprimir suma numeros impares

    return 0;
}

*/

//---------------------------------------- N1-4) Pida dos números y sume todos los números comprendidos entre el primero y el segundo (inclusive).
//---------------------------------------- Debe controlarse que el segundo número sea mayor que el primero.
/*
int main()
{
    int number1 = 0;
    int number2 = 0;
    int sum = 0;

    printf("Ingrese un numero: ");
    scanf("%d", &number1);
    do
    {
        printf("Ingrese un segundo numero: ");
        scanf("%d", &number2);
    } while (number2 < number1);

    for (int i = number1; i <= number2; i++)
    {
        sum += i;
    }
    printf("La suma de los numeros comprendidos de %d a %d es: %d\n", number1, number2, sum);

    return 0;
}
*/

// ----------------------------------------N1-5) Pida dos números y multiplique todos los números comprendidos entre el primero y el segundo (inclusive).
// Debe controlarse que el segundo número sea mayor que el primero.
/*
int main()
{
    int number1 = 0;
    int number2 = 0;
    int mult = 1;
    printf("Ingrese un numero: ");
    scanf("%d", &number1);
    do
    {
        printf("Ingrese un segundo numero: ");
        scanf("%d", &number2);
    } while (number2 < number1);

    for (int i = (number1 + 1); i <= number2; i++)
    {
        mult *= i;
    }
    printf("La suma de los numeros comprendidos de %d a %d es: %d\n", number1, number2, mult);

    return 0;
}
*/

// ----------------------------------------N1-6) Calcule el promedio de 10 números ingresados por el usuario

/*
#define NUM_MAX 10

int main()
{
    int sum = 0;
    int numeros = 0;
    int promedio = 0;

    for (int i = 1; i <= NUM_MAX; i++)
    {
        printf("Ingrese numero que va a estar en la posicion %d: ", i);
        scanf("%d", &numeros);
        sum += numeros;
    }

    promedio = sum / NUM_MAX;
    printf("El promedio de los %d numeros ingresados por el usuario es: %d\n", NUM_MAX, promedio);

    return 0;
}
*/

// ----------------------------------------N1-7) Pida un número entero entre 1 y 15 (controlar esto) y muestre el mismo número de asteriscos por pantalla.
/*
int main()
{
    int num = 0; // Var para almacenar el numero del input

    do
    {
        printf("Ingrese un numero entre 1 y 15: ");
        scanf("%d", &num);
    } while (num < 1 || num > 15); // Controlar que el numero ingresado este entre 1 y 15

    for (int i = 1; i <= num; i++) // For para imprimir la cantidad de * que indico el usuario con el numero ingresado
    {
        printf("* ");
    }

    return 0;
}
*/

//  --------------------------------------------------------------------------------NIVEL 2--------------------------------------------------------------------------------

// N2-1) Muestre los divisores de un número.
/*
int main()
{
    // La funcion srand establece una "semilla" para la generacion de los numeros que genere rand(), getpid() retorna un numero de proceso unico por cada vez que se ejecuta el programa, por ende se genera una semila diferente en cada ejecucion, entonces el rand() va a generar un numero distinto cada vez que se ejecuta

    srand(getpid());

    int number = rand() % 100; // la var number posee un valor aleatorio, generado por rand(), cada vez que se ejecuta el codigo

    printf("El numero es: %d\n", number); // imprimir el numero que se genero con la funcion rand()
    printf("Sus divisores son: ");

    for (int i = 1; i <= number; i++)
    {
        if (number % i == 0) // Verificar los numeros que sean divisores de number
        {
            printf("%d, ", i); // imprimir cada divisor
        }
    }
    return 0;
}
*/

// ----------------------------------------N2-2) Pida un número por teclado y decir si es un número primo o no. Controlar que el usuario ingrese un número mayor a 0.
/*
int main()
{
    int num = 0;
    do
    {
        printf("Ingrese un numero mayor a cero: ");
        scanf("%d", &num);
    } while (num <= 0); // Verificar que el numero sea mayor a cero

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0) // Verificar que el numero no sea primo
        {
            printf("El numero %d no es primo\n", num);
        }
        else
        {
            printf("El numero %d es primo\n", num);
        }
        break; // Salir del bucle si se halla alguno de los 2 casos
    }
    return 0;
}
*/

// ----------------------------------------N2-3) Calcule la suma de los cuadrados de los 100 primeros números enteros.
/*
#define NUM_MAX 100

int main()
{
    int result = 0; //var donde se almacena la suma de los cuadrados

    for (int i = 1; i <= NUM_MAX; i++)
    {
        result += pow(i, potencia);  //Realizar la suma de los cuadrados
    }
    printf("La suma de los cuadrados de los %d primeros numeros enteros es: %d\n", NUM_MAX, result); //Imprimir el resultado

    return 0;
}

*/

// ----------------------------------------N2-4) Calcule el promedio de N números, se dejarán de solicitar números hasta que se introduzca el cero.
/*
int main()
{

    int num = 0;   // Var donde se almacenan los numeros del usuario
    int sum = 0;   // Var almacena la suma de los numeros del usuario
    float avg = 0; // Almacena el promedio de los numeros

    for (float i = 0;; i++)
    {
        // Usuario introduce un numero
        printf("Intoduzca un numero: ");
        scanf("%d", &num);

        sum += num;

        if (num == 0) // Verificar que el numero ingresado sea cero
        {
            avg = sum / i;
            printf("El promedio de los numeros introducidos es %.2f\n", avg);
            break; // Salir del ciclo
        }
    }

    return 0;
}
*/
// ----------------------------------------N2-5) Reciba tres enteros positivos n, p y m, asegurándose que n<m
// - genere la salida n, n+p, n+2.p, n+3.p, …. k (k<=m y es de la forma n+NRO.p)
// Ejemplo n=2, p=3, m=10, debe generarse: 2, 5, 8
// Ejemplo n=1, p=4, m=21, debe generarse 1,5,9,13,17,21

/*
int numPositivo();

int main()
{
    int n = numPositivo();
    int p = numPositivo();
    int m = 0;
    int calc = 0;
    int first = 0;

    do
    {
        printf("Introduzca un tercer numero que sea mayor al primero: ");
        scanf("%d", &m);
    } while (n > m); // Verificar que n sea mayor a m

    for (int i = 0; calc <= m; i++)
    {
        calc = n + i * p; // Realizar el calculo del enunciado
        if (calc <= m)    // Verificar que el resultado sea menor o igual a m
        {
            if (first) // Verificar la var para imprimir una coma
            {
                printf(", "); // imprimir una coma ","
            }
            else
            {
                first = 1;
            }

            printf("%d", calc); // Imprimir el rdo del calculo
        }
    }
    printf("\n");

    return 0;
}

int numPositivo()
{
    int num;
    do
    {
        printf("Introduzca un numeros positivo: ");
        scanf("%d", &num);
    } while (num < 0);
    return num;
}

*/

// -------------------------------------------------------------------------------- Nivel 3 --------------------------------------------------------------------------------

// ---------------------------------------- N3-1) Muestre el abecedario por pantalla.

/*
int main()
{
    int first = 0;

    printf("El abecedario es: ");

    for (char letra = 'a'; letra <= 'z'; letra++) // Bucle usando las letras como variables
    {
        if (first) // Verificar la var para imprimir una coma
        {
            printf(", "); // imprimir una coma ","
        }
        else
        {
            first = 1;
        }
        printf("%c", letra);
    }

    printf("\n");
    return 0;
}
*/

// ---------------------------------------- N3-2) Calcule el factorial de un número entero positvo.

// n! = (n x (n-1)) x ...
/*
int main()
{
    // Usar un generador de numeros random
    srand(getpid());
    int num = rand() % 10; // la var number posee un valor aleatorio, generado por rand(), cada vez que se ejecuta el codigo

    // int factorial = num;

    printf("El numero es: %d\n", num);

    for (int i = (num - 1); i > 0; i--)
    {
        num *= i;
    }

    printf("El factorial es: %d\n", num);

    return 0;
}
*/

// ---------------------------------------- N3-3) Muestre las tablas de multiplicar del 1 al 10.

/*
int main()
{

    int mult = 0;

    for (int i = 1; i <= 10; i++) // Recorre el primer multiplo
    {
        for (int j = 0; j <= 10; j++) // Recorre el segundo multiplo
        {
            mult = i * j;

            printf("%d x %d = %d\n", i, j, mult);
        }
        printf("\n");
    }

    return 0;
}

*/

// ----------------------------------------N3-4) Muestre los 25 primeros números de la sucesión de Fibonacci.

// La sucesion Fibonacci, el numero es el resultado de la suma de los dos numeros anteriores, se define con la formula: F(n) = F(n-1) + F(n-2)
// Ejemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89,...

/*
#define NUM_MAX 25

int main()
{

    int first = 0;
    int n1 = 0;
    int n2 = 1;
    int num = 0;

    printf("Los primeros %d numeros de la sucesion Fibonacci son: ", NUM_MAX);
    printf("%d, ", n1);
    for (int i = 0; i < NUM_MAX; i++)
    {

        num = (n1 + n2);
        n1 = n2;
        n2 = num;

        if (first) // Verificar la var para imprimir una coma
        {
            printf(", "); // imprimir una coma ","
        }
        else
        {
            first = 1;
        }

        printf("%d", num);
    }

    return 0;
}
*/

// ---------------------------------------- N3-5) Permita ingresar una matriz cuadrada 4x4 y luego la muestre por pantalla.

/*
#define FILAS_MATRIZ 4
#define COLUMNAS_MATRIZ 4

int matriz[FILAS_MATRIZ][COLUMNAS_MATRIZ];

int main()
{
    // Leer los elementos de la matriz
    for (int i = 0; i < FILAS_MATRIZ; i++)
    {
        for (int j = 0; j < COLUMNAS_MATRIZ; j++)
        {
            printf("ingrese un numero para la posicion (%d, %d): ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Imprimir la matriz
    printf("La matriz ingresada es:\n");

    for (int i = 0; i < FILAS_MATRIZ; i++)
    {
        for (int j = 0; j < COLUMNAS_MATRIZ; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    return 0;
}
*/

// ---------------------------------------- N3-6) Empleando bucles for anidados intente generar las siguientes salidas por pantalla

// a)

/*
int main()
{
    int height = 5;

    for (int i = 0; i < height; i++) // Se encarga de las filas
    {
        for (int j = 0; j < height; j++)  // Se ocupa de las columnas
        {
            if (i >= j)
            {
                printf("*");
            }
        }
        printf("\n");
    }

    return 0;
}


// b)
/*
int main()
{
    int height = 4;

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < 6; j++)
        {

            printf("+");
        }
        printf("\n");
    }

    return 0;
}
*/
// c)
/*
int main()
{
    int height = 5;

    for (int i = height; i > 0; i--) // Se encarga de las filas
    {
        for (int j = 0; j < height; j++) // Se ocupa de las columnas
        {
            if (i > j)
            {
                printf("$");
            }
        }
        printf("\n");
    }

    return 0;
}

*/

// d)
/*
int main()
{
    int filas = 4;
    int column = 7;

    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if ((i + j) % 2 == 0) // Verificar paridad, si es par imprime "@" (suma de nros iguales da como rdo par)
            {
                printf("@");
            }
            else
            {
                printf(" . ");
            }
        }
        printf("\n");
    }

    return 0;
}
*/
