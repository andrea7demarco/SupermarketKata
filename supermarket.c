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

struct Nodo{
    Producto *productos;
    struct Lista *siguiente;
} typedef Nodo;

typedef struct Nodo *Lista;

Lista crearLista();
Lista insertar(Lista L, Producto productos);
void mostrarLista(Lista L);
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

Lista crearLista(){
    Lista L;
    L = NULL;
    return L;
}

Lista insertar(Lista L, Producto productos){
    struct Nodo *nuevo;
    nuevo = malloc(sizeof(struct Nodo)*20);
    nuevo->productos->precio = rand()%3000+100;
    int aux = rand()%3;
    char Nombres[3][20] =  {"Leche serenisima 1l", "Frutilla 500 Gr", "Arándano 125 Gr"};
    strcpy(nuevo->productos->nombre, Nombres[aux]);
    nuevo->siguiente;
    L = nuevo;
    return L;

}

void mostrarLista(Lista L){
    while(L != NULL){
        printf("Precio = $%d -- Nombre: %s", L->productos->precio, L->productos->nombre);
        L = L->siguiente;
    }
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