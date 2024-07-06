#include <stdio.h>
#include <stdlib.h>

//Definir la estructura del nodo
typedef struct Nodo{
    int valor;
    struct Nodo* izquierda;
    struct Nodo* derecha;    
}Nodo;

//Función para crear un nuevo nodo
Nodo* crearNodo(int valor){
    Nodo* nuevoNodo = (Nodo*)malloc(sizeof(Nodo));
    nuevoNodo->valor = valor;
    nuevoNodo->izquierda = NULL;
    nuevoNodo->derecha = NULL;
    return nuevoNodo;
}

//Función para agregar un hijo al nodo
Nodo* agregarHijo(Nodo* raiz, int valor){
    if (raiz == NULL){
        return crearNodo(valor);
    }else{
        if(valor <= raiz->valor){
            raiz->izquierda = agregarHijo(raiz->izquierda, valor);
        }else{
            raiz->derecha = agregarHijo(raiz->derecha, valor);
        }
        return raiz;
    }
}

//Función para imprimir el árbol.
void imprimirArbol(Nodo* raiz, int nivel)
{
        if (raiz == NULL)
                return;
        for (int i = 0; i < nivel; i++)
                printf(i == nivel - 1 ? "|-" : "  ");
        printf("%d\n", raiz->valor);
        imprimirArbol(raiz->izquierda, nivel + 1);
        imprimirArbol(raiz->derecha, nivel + 1);
}

// Función para liberar la memoria utilizada por el árbol binario
void LiberarMemoria(Nodo* raiz) {
    if (raiz == NULL)
        return;

    LiberarMemoria(raiz->izquierda);   // Liberar subárbol izquierdo
    LiberarMemoria(raiz->derecha);  // Liberar subárbol derecho

    free(raiz);  // Liberar el nodo actual
}

//Función principal
int main(){
    Nodo* raiz = NULL;
    int valores[] = {5, 3, 8, 2, 4, 7, 9};

    //Insertar valores en el árbol.
    for (int i = 0; i < sizeof(valores)/sizeof(valores[0]); i++){
        raiz = agregarHijo(raiz, valores[i]);
    }

    //Imprimir el arbol
    printf("El arbol binario es: \n");
    imprimirArbol(raiz, 0);

    // Liberar memoria utilizada por el árbol
    LiberarMemoria(raiz);

    return 0;
}