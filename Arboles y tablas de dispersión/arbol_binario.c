#include <stdio.h>
#include <stdlib.h>
#include "arbol_binario.h"

// Función para crear un nuevo nodo
Nodo* crearNodo(int valor) {
    Nodo* nuevoNodo = (Nodo*)malloc(sizeof(Nodo));
    nuevoNodo->valor = valor;
    nuevoNodo->izquierda = NULL;
    nuevoNodo->derecha = NULL;
    return nuevoNodo;
}

// Función para agregar un hijo al nodo
Nodo* agregarHijo(Nodo* raiz, int valor) {
    if (raiz == NULL) {
        return crearNodo(valor);
    } else {
        if (valor <= raiz->valor) {
            raiz->izquierda = agregarHijo(raiz->izquierda, valor);
        } else {
            raiz->derecha = agregarHijo(raiz->derecha, valor);
        }
        return raiz;
    }
}

// Función para imprimir el árbol.
void imprimirArbol(Nodo* raiz, int nivel) {
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
    LiberarMemoria(raiz->izquierda);
    LiberarMemoria(raiz->derecha);
    free(raiz);
}

// Función para encontrar el nodo con el valor mínimo en un subárbol
Nodo* encontrarMinimo(Nodo* nodo) {
    while (nodo->izquierda != NULL) {
        nodo = nodo->izquierda;
    }
    return nodo;
}

// Función para encontrar el nodo con el valor máximo en un subárbol
Nodo* encontrarMaximo(Nodo* nodo) {
    while (nodo->derecha != NULL) {
        nodo = nodo->derecha;
    }
    return nodo;
}


// Función para encontrar el sucesor de un nodo en un BST
Nodo* encontrarSucesor(Nodo* raiz, Nodo* nodo) {
    // Caso 1: El nodo tiene un hijo derecho
    if (nodo->derecha != NULL) {
        return encontrarMinimo(nodo->derecha);
    }
    
    // Caso 2: El nodo no tiene un hijo derecho
    Nodo* successor = NULL;
    Nodo* ancestro = raiz;
    while (ancestro != nodo) {
        if (nodo->valor < ancestro->valor) {
            successor = ancestro;
            ancestro = ancestro->izquierda;
        } else {
            ancestro = ancestro->derecha;
        }
    }
    return successor;
}


// Función para encontrar el predecesor de un nodo en un BST
Nodo* encontrarPredecesor(Nodo* raiz, Nodo* nodo) {
    // Caso 1: El nodo tiene un hijo izquierdo
    if (nodo->izquierda != NULL) {
        return encontrarMaximo(nodo->izquierda);
    }
    
    // Caso 2: El nodo no tiene un hijo izquierdo
    Nodo* predecesor = NULL;
    Nodo* ancestro = raiz;
    while (ancestro != nodo) {
        if (nodo->valor > ancestro->valor) {
            predecesor = ancestro;
            ancestro = ancestro->derecha;
        } else {
            ancestro = ancestro->izquierda;
        }
    }
    return predecesor;
}

