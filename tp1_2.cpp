#include <stdio.h>
#include <math.h>

int cuadrado(int num);

void cuadradoVoid(int num);

void invertir(int *a, int *b);

void orden(int *a, int *b);

int main()
{
    int x, pot;
    printf("Ingrese un numero para calcular su cuadrado: ");
    scanf("%d", &x);

    pot = cuadrado(x);
    printf("El cuadrado de %d, usando una funcion que devuelve un valor, es: %d\n", x, pot);

    cuadradoVoid(x);

    //////////

    int vble, *p_vble;
    printf("Ingrese un valor: ");
    scanf("%d", &vble);
    p_vble = &vble;
    printf("Direccion de memoria de la variable es: %d \nEl contenido de la variable es: %d\n", p_vble, *p_vble);

    //////////

    int y, z;
    printf("*****Valores a invertir***** \nIngrese el primer valor: ");
    scanf("%d", &y);
    printf("Ingrese el segundo valor: ");
    scanf("%d", &z);
    printf("Valores originales de 'y': %d y 'z': %d\n", y, z);

    invertir(&y, &z);

    printf("Valores invertidos, 'y': %d y 'z': %d\n", y, z);

    //////////

    int p, q;
    printf("*****Valores a ordenar***** \nIngrese el primer valor: ");
    scanf("%d", &p);
    printf("Ingrese el segundo valor: ");
    scanf("%d", &q);
    printf("Valores originales de 'p': %d y 'q': %d\n", p, q);

    orden(&p, &q);

    printf("Valores ordenados, 'p': %d y 'q': %d\n", p, q);

    //////////

    getchar();
    return 0;
}

int cuadrado(int num)
{
    int resultado;
    resultado = pow(num, 2);
    return (resultado);
}

void cuadradoVoid(int num)
{
    int resultado;
    resultado = pow(num, 2);
    printf("El cuadrado de %d, usando la funcion void, es: %d\n", num, resultado);
}

void invertir(int *a, int *b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c;
}

void orden(int *a, int *b)
{
    if (*b < *a)
    {
        int c;
        c = *a;
        *a = *b;
        *b = c;
    }
}