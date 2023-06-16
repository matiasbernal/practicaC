/*

Arrays Nivel 1
A1-1) Declare un array de 10 enteros y permita que el usuario ingrese valores comprendidos entre el -10 y el 10 (asegurar esto) y luego lo
muestre por pantalla.

A1-2) Declare dos arrays de 5 enteros cada uno, llamados A y B, luego en un tercer array de igual dimensión llamado S almacene la suma
de los dos anteriores.

A1-3) Declare un array de 10 enteros, permita la carga manual y luego determine lo siguiente:
- cuantos elementos son positivos y pares
- cuantos elementos son positivos e impares
- cuantos elementos son negativos y pares
- cuantos elementos son negativos e impares

A1-4) Declare un array A de N floats, se realice la carga manual y pida al usuario un float f en el rango (0, 100] y en un nuevo array P
establezca los elementos de esta forma. Cada elemento P[i] debe ser de la forma A[i]*f para i=0...N-1.

A1-5) Dado un array de 10 floats, mostrar por pantalla cuales elementos superan al promedio.

A1-6) Declare un array de 10 enteros en el rango [0, 100] (asegurarlo) y muestre por pantalla dichos elementos junto con la suma, el
promedio y la varianza. Investigar sobre los términos que desconozca.

A1-7) Declare dos arrays de 10 enteros con valores entre [0, 50] llamados M y N, luego determine si son:
- iguales: cuando cada componente ubicada en misma posición coincide.
- similares frente a suma: cuando no tienen las mismas componentes pero la suma de los elementos coincide
- diferentes: cuando no coinciden ni en las componentes ni en la suma

Arrays Nivel 2
A2-1) Permita la caga de una array de 30 enteros aleatorios. Luego mostrarlos por pantalla.

A2-2) Permita la carga aleatoria de dos arrays de 10 enteros cada uno, llamados A y B, e indique cual de los dos tiene más números pares
tratando de utilizando como máximo dos bucles for en todo el programa.

A2-3) Dado un array A de 10 ints cagado aleatoriamente y con valores comprendidos entre 0 y 100, determinar si se tienen más elementos
pares que impares o bien misma cantidad. Rehaga el ejercicio utilizando un único bucle for si empleo más de uno.

A2-4) Dado un array A de 10 enteros cargados automáticamente (con números aleatorios), invertir el array, es decir si se tiene el array
    A= [ 45, 11, -5, 80, 6, 99, 105, -200, 22, 1 ], A deberá quedar del siguiente modo al finalizar el programa
    A= [ 1, 22, -200, 105, 99, 6, 80, -5, 11, 45 ]. Considere el uso de una variable a modo de pivote.

A2-5) Dado un array A de N enteros cargados manualmente o bien de forma automática y un número entero r en el rango [-(N-1), N-1].
El valor r impondrá rotaciones a derecha (en caso de r positivo) o rotaciones a izquierda (en caso de r negativo) sobre los elementos del
array A. Una rotación es el cambio de posición en los elementos del array.
Ejemplo, un array A con N valiendo 10, r estará comprendido en [-9, 9].
Es decir, dado el array
    A= [ 45, 11, -5, 80, 6, 99, 105, -200, 22, 1],
    Si r= 1 ⇒ A= [ 1, 45, 11, -5, 80, 6, 99, 105, -200, 22 ] Todos los elementos rotaron 1 posición a la derecha
    Si r=-3 ⇒ A= [ -5, 80, 6, 99, 105, -200, 22, 1, 45, 11 ] Todos los elementos rotaron 3 posiciones a la izquierda

Arrays Nivel 3
A3-1) Permitir el ingreso de una matriz de enteros de dimensión 3x4 y mostrarla por pantalla.

A3-2) Permitir la carga automática de una matriz de dimensión NxN y mostrarla por pantalla.

A3-3) Dadas dos matrices de dimensión NxN, llamadas X e Y, mostrar por pantalla la suma de las mismas.

A3-4) Declarar un array A de 15 elementos enteros. Solicitar al usuario el ingreso de un valor por vez e ir colocando dicho entero en el
array, donde cada elemento previo existente en el array A deba ser menor o igual y cada elemento posterior deba ser mayor al que el
usuario ingresó. En cada paso mostrar el estado del array. Al finalizar deberá quedar el array ordenado de forma ascendente.

A3-5) Dado un array A de 20 enteros positivos en el rango [0, 100] cargados aleatoriamente, y un entero positivo e, determinar si dicho
entero e está presente en el array. Extender luego el programa para indicar no solo si está, sino también en cuantas ocasiones aparece.

A3-6) Dado un array de 10 enteros positivos en el rango [0, 100] cargadosaleatoriamente, mostrarlo por pantalla, luego ordenar sus
elementos de manera ascendente y finalmente mostrar el resultado.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <sys/types.h>


/* A1-1) Declare un array de 10 enteros y permita que el usuario ingrese valores comprendidos entre el -10 y el 10 (asegurar esto) y luego lo muestre por pantalla.*/

/*
#define N
int main()
{
    int array[N]; // Declaracion del array de 10 enteros
    int i;
    int valor;
    printf("Ingrese 10 valores enteros entre -10 y 10:\n");

    // Ciclo para ingresar los valores y asegurar que estyen entre -10 y 10
    for (i = 0; i < N; i++)
    {
        printf("Ingrese el valor %d: ", i + 1);
        scanf("%d", &valor);

        // Validacion para asegurar que le valor este entre -10 y 10
        while (valor < -10 || valor > 10)
        {
            printf("El valor debe estar entre -10 y 10. Ingrese nuevamente: ");
            scanf("%d", &valor);
        }

        array[i] = valor;
    }

    printf("\nLos valor es ingresados son: \n");

    // Ciclo para mostrar los valores del array
    for (i = 0; i < N; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}
*/

/*---------------------A1-2) Declare dos arrays de 5 enteros cada uno, llamados A y B, luego en un tercer array de igual dimensión llamado S almacene la suma de los dos anteriores.---------------------*/

/*
#define lenght 5

int suma(int A[], int B[], int S[]);

int main()
{

    int A[lenght];
    int B[lenght];
    int S[lenght];
    srand(getpid());

    printf("Los valores de A son:\n");
    for (int i = 0; i < lenght; i++)
    {
        int valorA = rand() % 100;
        A[i] = valorA;
        printf("%d ", A[i]);
    }

    printf("\nLos valores de B son:\n");
    for (int i = 0; i < lenght; i++)
    {
        int valorB = rand() % 100;
        B[i] = valorB;
        printf("%d ", B[i]);
    }

    suma(A, B, S);

    printf("\nLa suma de los 2 arrays anteriores son:\n");
    for (int i = 0; i < lenght; i++)
    {
        printf("%d ", S[i]);
    }

    return 0;
}

int suma(int A[], int B[], int S[])
{

    for (int i = 0; i < lenght; i++)
    {
        S[i] = A[i] + B[i];
    }
}

*/
/*
--------A1-3) Declare un array de 10 enteros, permita la carga manual y luego determine lo siguiente:
 - cuantos elementos son positivos y pares
 - cuantos elementos son positivos e impares
 - cuantos elementos son negativos y pares
 - cuantos elementos son negativos e impares
*/
/*
#define max 10

int main()
{
    int array[max]; // Declaracion del array de 10 enteros
    int i;
    int valor;
    printf("Ingrese 10 valores enteros:\n");

    // Ciclo para ingresar los valores
    for (i = 1; i <= max; i++)
    {
        printf("Ingrese el valor %d: ", i);
        scanf("%d", &valor);
        array[i] = valor; // Guarda el numero en el array
    }

    int positivosPares = 0;
    int positivosImpares = 0;
    int negativosPares = 0;
    int negativosImpares = 0;

    // Ciclo para analizar las distintas condiciones
    for (int i = 0; i < max; i++)
    {
        if (array[i] > 0 && array[i] % 2 == 0)
        {
            positivosPares++;
        }

        else if (array[i] > 0 && array[i] % 2 != 0)
        {
            positivosImpares++;
        }

        else if (array[i] < 0 && array[i] % 2 == 0)
        {
            negativosPares++;
        }

        else if (array[i] < 0 && array[i] % 2 != 0)
        {
            negativosImpares++;
        }
    }

    printf("Elementos positivos y pares: %d\n", positivosPares);
    printf("Elementos positivos y impares: %d\n", positivosImpares);
    printf("Elementos negativos y pares: %d\n", negativosPares);
    printf("Elementos negativos y impares: %d\n", negativosImpares);

    return 0;
}
*/

/* ------------A1-4) Declare un array A de N floats, se realice la carga manual y pida al usuario un float f en el rango (0, 100] y en un nuevo array P establezca los elementos de esta forma. Cada elemento P[i] debe ser de la forma A[i]*f para i=0...N-1 */

/*
#define N 10

int main()
{
    float A[N];
    float P[N];
    float f = 0;
    float valor = 0;
    printf("Ingrese 10 valores enteros:\n");

    // Ciclo para ingresar los valores
    for (int i = 0; i < N; i++)
    {
        printf("Ingrese el valor %d: ", i);
        scanf("%f", &valor);
        A[i] = valor; // Guarda el numero en el array
    }

    // Pedir al usuario que introduzca un valor float
    printf("\nIngrese un valor entre 0 y 100 (puede usar decimales): ");
    scanf("%f", &f);
    // Verificar que cumpla con la condicion
    while (f < 0 || f > 100)
    {
        printf("El valor debe estar entre 0 y 100. Ingrese nuevamente: ");
        scanf("%f", &f);
    }

    printf("\nLos elementos en el array P son los siguientes: ");

    // Ciclo para ingresar los valores de P[i]
    for (int i = 0; i < N; i++)
    {
        P[i] = A[i] * f;
        printf("%.2f ", P[i]);
    }

    return 0;
}
*/

/*-------------A1-5) Dado un array de 10 floats, mostrar por pantalla cuales elementos superan al promedio*/
/*
#define N 10

int main()
{
    float array[N];
    float valor = 0;
    float avg = 0;
    float sum = 0;
    printf("Ingrese 10 valores enteros:\n");
    // Ciclo para darle los valores al array
    for (int i = 0; i < N; i++)
    {
        printf("Ingrese el valor %d: ", i);
        scanf("%f", &valor);
        array[i] = valor;
    }

    // Ciclo para sumar todos los valores del array
    for (int i = 0; i < N; i++)
    {
        sum += array[i];
    }

    // Calcular el promedio/average
    avg = sum / N;

    printf("El promedio obtenido es %.2f, los superan los siguientes valores d2el array:\n ", avg);
    for (int i = 0; i < N; i++)
    {
        if (array[i] > avg)
        {
            printf("%.2f ", array[i]);
        }
    }

    return 0;
}

*/
/*--------A1-6) Declare un array de 10 enteros en el rango [0, 100] (asegurarlo) y muestre por pantalla dichos elementos junto con la suma, el
promedio y la varianza. Investigar sobre los términos que desconozca */
/*

#define N 10

int main()
{
    int valor = 0;
    int array[N];
    srand(getpid());

    printf("Los valores del array son:\n");

    // Declarar 10 enteros en el array y verificar que cumplan con el rango
    do
    {
        for (int i = 0; i < N; i++)
        {
            valor = rand() % 100;
            array[i] = valor;
            printf("%d ", array[i]);
        }
    } while (valor < 0 || valor > 100);

    int avg = 0;
    int sum = 0;
    int sum2 = 0;
    int vrz = 0;
    int valor2 = 0;
    // Ciclo para calcular la suma
    for (int i = 0; i < N; i++)
    {
        sum += array[i];
    }

    // Calcular el promedio
    avg = sum / N;

    // ciclo para calcular la varianza
    for (int i = 0; i < N; i++)
    {
        valor2 = pow(array[i] - avg, 2);
        array[i] = valor2;
        sum2 += array[i];
    }

    vrz = sum2 / N;

    printf("\nLa suma de los elementos del array es: %d\n", sum);
    printf("El promedio de los elementos del array es: %d\n", avg);
    printf("La varianza de los elementos del array es: %d\n", vrz);

    return 0;
}
*/
/*--------======== A1-7) Declare dos arrays de 10 enteros con valores entre [0, 50] llamados M y N, luego determine si son:
 - iguales: cuando cada componente ubicada en misma posición coincide.
 - similares frente a suma: cuando no tienen las mismas componentes pero la suma de los elementos coincide
 - diferentes: cuando no coinciden ni en las componentes ni en la suma */
/*
#define MAX 10

int main()
{
    int valor1 = 0;
    int valor2 = 0;
    int M[MAX], N[MAX];
    srand(getpid());

    printf("Los valores del array M son:\n");

    // Declarar 10 enteros en el array y verificar que cumplan con el rango
    do
    {
        for (int i = 0; i < MAX; i++)
        {
            valor1 = rand() % 50;
            M[i] = valor1;
            printf("%d ", M[i]);
        }
    } while (valor1 < 0 || valor1 > 50);

    printf("\nLos valores del array N son:\n");
    do
    {
        for (int i = 0; i < MAX; i++)
        {
            valor2 = rand() % 50;
            N[i] = valor2;
            printf("%d ", N[i]);
        }
    } while (valor2 < 0 || valor2 > 50);

    int sum1 = 0;
    int sum2 = 0;

    // Ciclo para comparar si son iguales
    for (int i = 0; i < MAX; i++)
    {
        if (M[i] == N[i] && M[i + 1] == N[i + 1])
        {
            printf("\nLos arrays son iguales\n");
            break;
        }

        else if (M[i] != N[i])
        {
            printf("\nLos arrays son diferentes");
            break;
        }
    }
    for (int i = 0; i < MAX; i++)
    {

        sum1 += M[i];
        sum2 += N[i];
        if (sum1 == sum2)
        {
            printf("\nLos arrays M y N son iguales frente a la suma, con un valor de %d para el array M y para el array N un valor de %d", sum1, sum2);
        }
    }

    return 0;
}
*/
/*----------------------------------------NIVEL 2----------------------------------------*/

/*----------------A2-1)Permita la caga de una array de 30 enteros aleatorios. Luego mostrarlos por pantalla.--------------------*/
/*
#define SIZE 30

int main()
{
    int arr[SIZE];
    int valor1 = 0;
    srand(getpid());

    printf("Los valores del array son: ");
    for (int i = 0; i < SIZE; i++)
    {
        valor1 = rand() % 100;
        arr[i] = valor1;
        printf("%d ", arr[i]);
    }

    return 0;
}
*/

/*---------------A2-2)Permita la carga aleatoria de dos arrays de 10 enteros cada uno, llamados A y B, e indique cual de los dos tiene más números pares
tratando de utilizando como máximo dos bucles for en todo el programa.----------------*/

/*
#define SIZE 10

int main()
{
    int valor1 = 0;
    int valor2 = 0;
    int M[SIZE], N[SIZE];
    srand(getpid());

    // Ciclo While para elegir los valores del M[]
    printf("Los valores del array M son: ");
    int i = 0;
    while (i < SIZE)
    {
        valor1 = rand() % 100;
        M[i] = valor1;
        printf("%d ", M[i]);
        i++;
    }

    printf("\n");

    // Ciclo While para elegir los valores de N[]
    printf("Los valores del array N son: ");
    int j = 0;
    while (j < SIZE)
    {
        valor2 = rand() % 100;
        N[j] = valor2;
        printf("%d ", N[j]);
        j++;
    }
    printf("\n");

    // Ciclo para ver numeros pares
    int numParM = 0;
    int numParN = 0;
    for (int i = 0; i < SIZE; i++)
    {
        if (M[i] % 2 == 0)
        {
            numParM++;
        }
    }
    for (int i = 0; i < SIZE; i++)
    {
        if (N[i] % 2 == 0)
        {
            numParN++;
        }
    }
    if (numParM > numParN)
    {
        printf("El array M tiene mas numeros pares");
    }
    else if (numParM < numParN)
    {
        printf("El array N tiene mas numeros pares");
    }
    else if (numParM == numParN)
    {
        printf("Los arrays M y N tienen la misma cantidad de numeros pares");
    }

    return 0;
}
*/
/*------------A2-3) Dado un array A de 10 ints cargado aleatoriamente y con valores comprendidos entre 0 y 100, determinar si se tienen más elementos
pares que impares o bien misma cantidad. Rehaga el ejercicio utilizando un único bucle for si empleo más de uno.--------------*/
/*
#define SIZE 10

int main()
{
    int valor1 = 0;
    int A[SIZE];
    int numPar = 0;
    int numImpar = 0;

    printf("Los valores del array A son: ");

    // Ciclo para elegir los valores del A y analizar paridad
    for (int i = 0; i < SIZE; i++)
    {
        valor1 = rand() % 100;
        A[i] = valor1;
        printf("%d ", A[i]);

        // Analizar paridad del array A
        if (A[i] % 2 == 0)
        {
            numPar++;
        }
        else
        {
            numImpar++;
        }
    }
    printf("\n");

    if (numPar > numImpar)
    {
        printf("El array A tiene mayoria de numeros pares");
    }
    else if (numImpar == numPar)
    {
        printf("El array A tiene la misma cantidad de pares como de impares");
    }
    else
    {
        printf("El array A tiene mayoria de numeros impares");
    }

    return 0;
}
*/

/*---------A2-4) Dado un array A de 10 enteros cargados automáticamente (con números aleatorios), invertir el array, es decir si se tiene el array
 A= [ 45, 11, -5, 80, 6, 99, 105, -200, 22, 1 ], A deberá quedar del siguiente modo al finalizar el programa
 A= [ 1, 22, -200, 105, 99, 6, 80, -5, 11, 45 ]. Considere el uso de una variable a modo de pivote.
*/
/*
#define SIZE 10

int main()
{
    int valor, i, j = 0;
    int A[SIZE];
    srand(getpid());
    printf("Los valores del array A son: ");

    // Ciclo para elegir los valores del A y analizar paridad
    for (int i = 0; i < SIZE; i++)
    {
        valor = rand() % 100;
        A[i] = valor;
        printf("%d ", A[i]);
    }
    printf("\n");

    printf("Array A invertido: ");
    // Ciclo para invertir el orden
    for (i = 0, j = SIZE - 1; i < j; i++, j--)
    {
        // Intercambia los elementos en las posiciones i y j
        valor = A[i];
        A[i] = A[j];
        A[j] = valor;
    }

    for (int i = 0; i < SIZE; i++)
    {
        printf("%d ", A[i]);
    }

    return 0;
}
*/

/*---A2-5) Dado un array A de N enteros cargados manualmente o bien de forma automática y un número entero r en el rango [-(N-1), N-1].
El valor r impondrá rotaciones a derecha (en caso de r positivo) o rotaciones a izquierda (en caso de r negativo) sobre los elementos del
array A. Una rotación es el cambio de posición en los elementos del array.---*/
/*
#define N 10

int main()
{
    int valor, r = 0;
    int A[N];
    srand(getpid());
    printf("Los valores del array A son: ");

    // Ciclo para elegir los valores del A y analizar paridad
    for (int i = 0; i < N; i++)
    {
        valor = rand() % 100;
        A[i] = valor;
        printf("%d ", A[i]);
    }
    printf("\n");

    // Ingresar valor r
    do
    {
        printf("Ingrese un numero dentro del rango [%d, %d]: ", -(N - 1), N - 1);
        scanf("%d", &r);
    } while (r < -N - 1 || r > N - 1);

    // Rotaciones a la derecha
    int temp = 0;
    if (r > 0)
    {
        for (int i = 0; i < r; i++)
        {
            for (int j = N - 1; j > 0; j--)
            {
                temp = A[j];     // Guardar ultimo elemento
                A[j] = A[j - 1]; // Desplazar los elementos hacia la derecha
                A[j - 1] = temp; // Colocar el ultimo elemnto en la primera posicion
            }
        }
    }
    // Rotaciones a la izquierda
    else if (r < 0)
    {
        r = abs(r); // Convertir r a positivo
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < N - 1; j++)
            {
                temp = A[j];     // Guardar el primer elemento
                A[j] = A[j + 1]; // Desplazar los elementos hacia la izquierda
                A[j + 1] = temp; // Colocar el primer elemento en la última posición
            }
        }
    }

    printf("Rotacion de A: ");
    for (int i = 0; i < N; i++)
    {
        printf("%d ", A[i]);
    }

    return 0;
}
*/

/*-----------------------------------------------A3-1) Permitir el ingreso de una matriz de enteros de dimensión 3x4 y mostrarla por pantalla.*/
/*
#define FILAS_MATRIZ 3
#define COLUMNAS_MATRIZ 4

int matriz[FILAS_MATRIZ][COLUMNAS_MATRIZ];


int main()
{
    int valor = 0;
    srand(getpid());
    // Leer los elementos de la matriz
    for (int i = 0; i < FILAS_MATRIZ; i++)
    {
        for (int j = 0; j < COLUMNAS_MATRIZ; j++)
        {
            // printf("ingrese un numero para la posicion (%d, %d): ", i, j);

            // Ciclo para elegir los valores del A y analizar paridad
            valor = rand() % 100;
            matriz[i][j] = valor;
            // printf("%d ", matriz[i][j]);
        }
        printf("\n");

        // scanf("%d", &matriz[i][j]);
    }

    printf("\n");

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
/*---------A3-2) Permitir la carga automática de una matriz de dimensión NxN y mostrarla por pantalla.*/

/*
int main()
{
    int valor, n1, n2 = 0;

    // Elegir nro de filas de la matriz
    printf("Ingresar numero de filas de la matriz: ");
    scanf("%d", &n1);

    // Elegir nro de columnas de la matriz
    printf("\nIngresar numero de columnas de la matriz: ");
    scanf("%d", &n2);

    int matriz[n1][n2];
    srand(getpid());
    // Generar los elementos de la matriz
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            valor = rand() % 100;
            matriz[i][j] = valor;
        }
    }
    printf("\n");

    // Imprimir la matriz
    printf("La matriz ingresada es:\n");

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    return 0;
}
*/

/*---------------------A3-3) Dadas dos matrices de dimensión NxN, llamadas X e Y, mostrar por pantalla la suma de las mismas-----------------*/

/*int main()
{
    int valor1, valor2, N = 0;

    // Elegir nro de filas de la matriz
    printf("Ingresar numero de filas y columnas de la matriz: ");
    scanf("%d", &N);

    int X[N][N];
    int Y[N][N];
    srand(getpid());

    // Generar los elementos de la matriz
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            valor1 = rand() % 100;
            X[i][j] = valor1;
            valor2 = rand() % 100;
            Y[i][j] = valor2;
        }
    }
    printf("\n");

    printf("La matriz X es:\n");
    // Ciclo para elegir los elementos de la matriz X
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%d ", X[i][j]);
        }
        printf("\n");
    }

    printf("La matriz Y es:\n");
    // Ciclo para elegir los elementos de la matriz Y
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%d ", Y[i][j]);
        }
        printf("\n");
    }

    int sum = 0;
    // Ciclo para sumar ambas matrices
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            sum += X[i][j] + Y[i][j];
        }
    }
    printf("La suma de ambas matrices es: %d", sum);

    return 0;
}
*/

/*--------------------A3-4) Declarar un array A de 15 elementos enteros. Solicitar al usuario el ingreso de un valor por vez e ir colocando dicho entero en el
array, donde cada elemento previo existente en el array A deba ser menor o igual y cada elemento posterior deba ser mayor al que el
usuario ingresó. En cada paso mostrar el estado del array. Al finalizar deberá quedar el array ordenado de forma ascendente.  */

/*#define N 15

int main()
{
    int valor = 0;
    srand(getpid());
    int A[N];

    printf("Ingresar un elemento: ");
    // Ciclo para elegir los 15 elementos del array;

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &valor);
        A[i] = valor;
        printf("Los valores del array son: %d ", A[i]);
    }

    // Ciclo para ordenar el array A
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N - i - 1; j++)
        {
            if (A[j] > A[j + 1])
            {
                // Intercambia los elementos A[j] y A[j+1]
                int temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
        printf("\n");
    }
}

// Ciclo para imprimir el array ordenado ascendentemente
printf("Ordenado de forma ascendente: ");
for (int i = 0; i < N; i++)
{
    printf("%d ", A[i]);
}

return 0;
}
*/
// CORRECCION CHATGPT (SOLO ME DEJA AGREGAR VALORES MAS GRANDES QUE EL ANTERIOR, NO CUMPLE LO PEDIDO EN EL PROBLEMA)
/*
#define N 15

int main()
{
    int valor = 0;
    int A[N];

    // Ciclo para elegir los 15 elementos del array;
    for (int i = 0; i < N; i++)
    {
        printf("Ingresar un elemento: ");
        scanf("%d", &valor);
        A[i] = valor;

        // Verificar que cada elemento previo sea menor o igual al valor ingresado
        for (int j = 0; j < i; j++)
        {
            if (A[j] > valor)
            {
                printf("El elemento ingresado no cumple con la condición. Inténtelo de nuevo.\n");
                i--; // Decrementar i para ingresar nuevamente el elemento en la misma posición
                break;
            }
        }

        // Mostrar el estado actual del array
        printf("Estado actual del array A: ");
        for (int j = 0; j <= i; j++)
        {
            printf("%d ", A[j]);
        }
        printf("\n");
    }

    // Ordenar el array A de forma ascendente usando el algoritmo de Bubble Sort
    for (int i = 0; i < N - 1; i++)
    {
        for (int j = 0; j < N - i - 1; j++)
        {
            if (A[j] > A[j + 1])
            {
                // Intercambiar los elementos A[j] y A[j+1]
                int temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }

    // Mostrar el array A ordenado de forma ascendente
    printf("Array A ordenado de forma ascendente: ");
    for (int i = 0; i < N; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}
*/
/*---------------------A3-5) Dado un array A de 20 enteros positivos en el rango [0, 100] cargados aleatoriamente, y un entero positivo e, determinar si dicho
entero e está presente en el array. Extender luego el programa para indicar no solo si está, sino también en cuantas ocasiones aparece.
*/

/*
#define N 20

int main()
{
    int valor, e = 0;
    int A[N];
    srand(getpid());
    printf("Los valores del array A son: ");

    // Ciclo para elegir los valores del A
    for (int i = 0; i < N; i++)
    {
        valor = rand() % 100;
        A[i] = valor;
        printf("%d ", A[i]);
    }
    printf("\n");

    // Ingresar entero positivo 'e'
    do
    {
        printf("Ingrese un numero entero ");
        scanf("%d", &e);
    } while (e < 0);

    int numInput = 0;
    for (int i = 0; i < N; i++)
    {
        if (A[i] == e)
        {
            numInput++;
        }
    }
    printf("\nEl numero %d, aparece %d vez/veces en el array A", e, numInput);

    return 0;
}
*/

/*----------A3-6) Dado un array de 10 enteros positivos en el rango [0, 100] cargados aleatoriamente, mostrarlo por pantalla, luego ordenar sus
elementos de manera ascendente y finalmente mostrar el resultado.-------*/

/*#define SIZE 10

int main()
{
    int valor = 0;
    int A[SIZE];
    srand(time(NULL));

    // Ciclo para generar los elementos del array
    printf("El array A tiene los siguientes elementos: ");
    for (int i = 0; i < SIZE; i++)
    {
        valor = rand() % 100;
        A[i] = valor;
        printf("%d ", A[i]);
    }
    printf("\n");


    // Ciclo para ordenar el array de forma ascendente
    for (int i = 0; i < SIZE - 1; i++)
    {
        for (int j = 0; j < (SIZE - i - 1); j++)
        {
            if (A[j] > A[j + 1])
            {
                // Intercambia los elementos A[j] y A[j+1]
                int temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }

    }
    // Ciclo para imprimir el array ordenado ascendentemente
    printf("Ordenado de forma ascendente: ");
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d ", A[i]);
    }


    return 0;
}
*/
