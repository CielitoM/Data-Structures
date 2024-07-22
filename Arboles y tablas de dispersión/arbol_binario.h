#ifndef ARBOL_BINARIO_H
#define ARBOL_BINARIO_H

// Definir la estructura del nodo
typedef struct Nodo {
    int valor;
    struct Nodo* izquierda;
    struct Nodo* derecha;
} Nodo;

// Declaraciones de funciones
Nodo* crearNodo(int valor);
Nodo* agregarHijo(Nodo* raiz, int valor);
void imprimirArbol(Nodo* raiz, int nivel);
void LiberarMemoria(Nodo* raiz);
Nodo* encontrarMinimo(Nodo* nodo);
Nodo* encontrarMaximo(Nodo* nodo);
Nodo* encontrarSucesor(Nodo* raiz, Nodo* nodo);
Nodo* encontrarPredecesor(Nodo* raiz, Nodo* nodo);
#endif // ARBOL_BINARIO_H
