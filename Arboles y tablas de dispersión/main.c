#include <stdio.h>
#include "arbol_binario.h"
#include "arbol_binario.c"

int main() {
    // Árbol binario de prueba, encontrar sucesor y predecesor.
    Nodo* raiz = NULL;

    int valores[] = {15, 10, 20, 8, 12, 17, 25, 6, 11, 16, 27};

    // Insertar valores en el árbol.
    for (int i = 0; i < sizeof(valores)/sizeof(valores[0]); i++) {
        raiz = agregarHijo(raiz, valores[i]);
    }

    // Imprimir el árbol
    printf("El árbol binario es: \n");
    imprimirArbol(raiz, 0);

    // Encontrar el sucesor de un nodo específico
    Nodo* nodo = raiz->izquierda->izquierda; // Nodo con valor 8

    Nodo* sucesor = encontrarSucesor(raiz, nodo);
    if (sucesor != NULL) {
        printf("El sucesor del nodo con valor %d es %d\n", nodo->valor, sucesor->valor);
    } else {
        printf("El nodo con valor %d no tiene sucesor\n", nodo->valor);
    }

    // Encontrar el predecesor de un nodo específico
    Nodo* predecesor = encontrarPredecesor(raiz, nodo);
    if (predecesor != NULL) {
        printf("El predecesor del nodo con valor %d es %d\n", nodo->valor, predecesor->valor);
    } else {
        printf("El nodo con valor %d no tiene predecesor\n", nodo->valor);
    }

    // Liberar memoria utilizada por el árbol
    LiberarMemoria(raiz);

    return 0;
}
