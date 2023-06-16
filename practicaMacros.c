/*MACROS - BATERÍA DE EJERCICIOS: (no hace falta la entregar ninguno de ellos)
(Tip) usen el operador ternario:
expresión_boleana ? valor_si_cierto : valor_si_falso
Escriban macros para determinar:

Nivel 1:
1) El mínimo entre dos enteros.
#define MIN(X,Y) .....siguen uds.....
2) El máximo entre dos enteros
#define MAX(X,Y) .....siguen uds.....
3) Si un número es par (aquí es útil el operador %, que da el resto de la división entera)
#define PAR(X) .....siguen uds.....
4) Si un número X es divisible (de manera entera) por otro Y (considerar Y nunca es 0 )
#define DIVISIBLE(X,Y) .....siguen uds.....

Nivel 2:
5) Determinar si un número está entre el 0 y el 100 (se puede usar cond1 && cond2)
#define ENTRE_0_100(X) .....siguen uds.....
6) Determinar si dos números son consecutivos, (5 y 4 o 33 y 34 lo son, pero 40 y 42 o bien
8 y 91 no lo son)
#define CONSECUTIVOS(X,Y) .....siguen uds.....

Nivel 3:
7) Determinar el máximo entre tres enteros
#define MAX(X,Y,Z) .....siguen uds.....
Pueden crear todas las macros en un mismo programa C y utilicen printf/scanf para pedir
información al usuario y presentar resultados.
Avancen con los que puedan, denles batalla.
Dudas y consultas , bienvenidas!*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

// Ejercicio 1
/*
#define MIN(X,Y) ((X)<=(Y))?1:0  // 1 si x <= y || 0 si x > y

int main(){
    int nro1, nro2 = 0;
    printf("Ingrese un entero: ");
    scanf(" %d", &nro1);

    printf("Ingrese otro entero: ");
    scanf(" %d", &nro2);

    if (MIN(nro1,nro2) == 1) {
        printf("Ël minimo es %d\n", nro1);
    }
    else {
        printf("El minimo es %d\n", nro2);
    }

    return 0;
}
*/

// Ejercicio 2
/*
#define MAX(X,Y) (X>Y)?1:0 // 1 si X > Y || 0 si X < Y

int main(){
    int nro1, nro2;

    printf("Introduce un numero: ");
    scanf(" %d", &nro1);

    printf("Introduce otro numero: ");
    scanf(" %d", &nro2);

    if (MAX(nro1,nro2) == 1){
        printf("El numero max es %d\n", nro1);
    }
    else{
        printf("El numero max es %d\n", nro2);
    }

    return 0;
}
*/

// Ejercicio 3
/*
#define PAR(X) (X%2)

int main()
{
    int nro;

    printf("Introduce un numero: ");
    scanf(" %d", &nro);



    if (PAR(nro) == 0)
    {
        printf("El numero %d es par\n", nro);
    }
    else
    {
        printf("El numero %d no es par\n", nro);
    }

    return 0;
}
*/

// Ejercicio 4

/*
#define DIVISIBLE(X, Y) (X % Y == 0) ? 1 : 0 // Si es true da valor 1, sino es 0

int main()
{
    int nro1, nro2;

    printf("Introduce un numero: ");
    scanf(" %d", &nro1);

    do
    {
        printf("Introduce otro numero: ");
        scanf(" %d", &nro2);
    } while (nro2 == 0);

    if (DIVISIBLE(nro1, nro2) == 1)
    {
        printf("El numero %d es divisible de forma entera por %d\n", nro1, nro2);
    }
    else
    {
        printf("El numero %d no es divisible de forma entera por %d\n", nro1, nro2);
    }

    return 0;
}
*/
// Ejercicio 5
/*
#define ENTRE_0_100(X) ((X >= 0) && (X <= 100))

int main()
{
    int nro;

    printf("Introduce un numero: ");
    scanf(" %d", &nro);

    if (ENTRE_0_100(nro))
    {
        printf("El numero %d esta entre 0 y 100", nro);
    }
    else
    {
        printf("El numero %d no esta entre 0 y 100", nro);
    }

    return 0;
}
*/

// Ejercicio 6
/*
#define CONSECUTIVOS(X, Y) (X == Y - 1 || X == Y + 1) ? 1 : 0

int main()
{
    int nro1, nro2;

    printf("Introduce un numero: ");
    scanf(" %d", &nro1);

    do
    {
        printf("Introduce otro numero: ");
        scanf(" %d", &nro2);
    } while (nro2 == nro1);

    if (CONSECUTIVOS(nro1, nro2) == 1)
    {
        printf("El numero %d es consecutivo de %d\n", nro1, nro2);
    }
    else
    {
        printf("El numero %d no es consecutivo de %d\n", nro1, nro2);
    }

    return 0;
}
*/

// EJERCICIO 7
/*
#define MAX(X, Y, Z) ((X > Y) ? ((X > Z) ? X : Z) : ((Y > Z) ? Y : Z))

int main()
{
    int nro1, nro2, nro3;

    printf("Introduce un numero: ");
    scanf(" %d", &nro1);

    do
    {
        printf("Introduce el segundo numero: ");
        scanf(" %d", &nro2);
    } while (nro2 == nro1);

    do
    {
        printf("Introduce un ultimo numero: ");
        scanf(" %d", &nro3);
    } while (nro3 == nro1 || nro3 == nro2);

    if (MAX(nro1, nro2, nro3) == nro1)
    {
        printf("El maximo numero es %d\n", nro1);
    }
    else if (MAX(nro1, nro2, nro3) == nro3)
    {
        printf("El maximo numero es %d\n", nro3);
    }
    else
    {
        printf("El maximo numero es %d\n", nro2);
    }

    return 0;
}
*/