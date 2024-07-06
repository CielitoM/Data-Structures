#include <stdio.h>
#include <stdlib.h>

//Definir la estructura del nodo
//Cada nodo tiene un valor, un puntero a su primer hijo
//y un puntero a su siguiente hermano
typedef struct Nodo{
    int valor;
    struct Nodo *primer_hijo;
    struct Nodo *siguiente_hermano;
} Nodo;

//Función para crear un nuevo nodo
Nodo* crearNodo(int valor){

    //asignar la memoria para un nuevo nodo e inicializar sus valores
    Nodo* nuevoNodo = (Nodo*)malloc(sizeof(Nodo));
    nuevoNodo->valor = valor;
    nuevoNodo->primer_hijo = NULL;
    nuevoNodo->siguiente_hermano = NULL;
    return nuevoNodo;
}

//Función para agregar un hijo a un nodo
//Si el nodo ya tiene hijos, encuentra el ultimo hijo y agrega el
//nuevo hijo como su siguiente hermano
void agregarHijo(Nodo* padre, Nodo* hijo) {
    if (padre -> primer_hijo == NULL){
        padre -> primer_hijo = hijo;
    } else {
        Nodo* AUX = padre -> primer_hijo;
        while (AUX->siguiente_hermano != NULL)
        {
            AUX = AUX ->siguiente_hermano;
        }
        AUX->siguiente_hermano = hijo;
    }
}


// Función para imprimir el árbol (preorden)
void imprimirArbol(Nodo* raiz, int nivel) {
    if (raiz == NULL) return; //arbol vacio

    for (int i = 0; i < nivel; i++) printf("  ");
    printf("%d\n", raiz->valor);
    imprimirArbol(raiz->primer_hijo, nivel + 1);
    imprimirArbol(raiz->siguiente_hermano, nivel);
}


//Función principal
int main(){
    //Crear los nodos del arbol
    Nodo* nodo1 = crearNodo(1);
    Nodo* nodo2 = crearNodo(2);
    Nodo* nodo3 = crearNodo(3);
    Nodo* nodo9 = crearNodo(9);
    Nodo* nodo10 = crearNodo(10);
    Nodo* nodo4 = crearNodo(4);
    Nodo* nodo5 = crearNodo(5);
    Nodo* nodo11 = crearNodo(11);
    Nodo* nodo12 = crearNodo(12);
    Nodo* nodo6 = crearNodo(6);
    Nodo* nodo7 = crearNodo(7);
    Nodo* nodo8 = crearNodo(8);

    //Establecer las relaciones de primer hijo, siguiente hermano
    agregarHijo(nodo1, nodo2);
    agregarHijo(nodo1, nodo3);
    agregarHijo(nodo1, nodo9);
    agregarHijo(nodo1, nodo10);


    agregarHijo(nodo3, nodo4);
    agregarHijo(nodo3, nodo5);

    agregarHijo(nodo10, nodo11);
    agregarHijo(nodo10, nodo12);

    agregarHijo(nodo4, nodo6);
    agregarHijo(nodo4, nodo7);
    agregarHijo(nodo4, nodo8);

    //IMPRIMIR EL ARBOL
    imprimirArbol(nodo1, 0);
    
    // Liberar memoria
    free(nodo1); free(nodo2); free(nodo3); free(nodo9); free(nodo10);
    free(nodo4); free(nodo5); free(nodo11); free(nodo12); free(nodo6); free(nodo7); free(nodo8);

    printf("Programa ejecutado correctamente\n");

    return 0;
}