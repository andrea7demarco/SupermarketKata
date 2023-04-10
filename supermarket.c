#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define MAX 30

typedef struct Producto
{
    int precio;
    char nombre[MAX];
} Producto;

void CargarProductos(Producto productos[]);
void mostrarProducto(Producto productos);

int main()
{
    char Nombres[3][20] =  {"Leche serenisima 1l", "Frutilla 500 Gr", "Arándano 125 Gr"};
    Producto productos[20];
    CargarProductos(productos);
    for (int i = 0; i < 20; i++)
    {
        mostrarProducto(productos[i]);
    }

    return 0;
}

void CargarProductos(Producto productos[])
{
    char Nombres[3][20] =  {"Leche serenisima 1l", "Frutilla 500 Gr", "Arándano 125 Gr"};
    for (int i = 0; i < 20; i++)
    {
        productos[i].precio = 100 + rand() % 3000;
        int indice = rand() % 3; 
        strcpy(productos[i].nombre, Nombres[indice]);   
    }
}

void mostrarProducto(Producto productos)
{
    printf("Nombre: %s -- Precio: $%d\n", productos.nombre, productos.precio);
}