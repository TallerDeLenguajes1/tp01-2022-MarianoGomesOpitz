#include <stdio.h>

int main()
{
    printf("Hola, mundo\n");

    int vble = 12, *punt;
    punt = &vble;

    printf("Contenido del puntero: %d\n", *punt);
    printf("Direccion de memoria almacenada en el puntero: %d\n", punt);
    printf("Direccion de memoria de la variable: %d\n", &vble);
    printf("Direccion de memoria del puntero: %d\n", &punt);
    printf("Tamano de la variable: %d\n", sizeof(&vble));

    getchar();
    return 0;
}