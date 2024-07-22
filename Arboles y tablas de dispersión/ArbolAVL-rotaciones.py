
class Nodo:
    def __init__(self, valor):
        self.valor = valor
        self.izquierda = None
        self.derecha = None
        self.altura = 1

class ArbolAVL:
    def obtener_altura(self, nodo):
        if not nodo:
            return 0
        return nodo.altura
    
    def obtener_factor_balance(self, nodo):
        if not nodo:
            return 0
        return self.obtener_altura(nodo.izquierda) - self.obtener_altura(nodo.derecha)
    
    def rotacion_derecha(self, nodoDesbalanceado):
        # Nodo que será el nuevo padre después de la rotación.
        nuevoPadre = nodoDesbalanceado.izquierda

        # Subárbol derecho del nuevo padre, que debe ser movido.
        subarbolDerechoDeNuevoPadre = nuevoPadre.derecha

        # Realizar la rotación
        nuevoPadre.derecha = nodoDesbalanceado
        nodoDesbalanceado.izquierda = subarbolDerechoDeNuevoPadre

        # Actualizar las alturas de los nodos afectados
        nodoDesbalanceado.altura = 1 + max(self.obtener_altura(nodoDesbalanceado.izquierda), self.obtener_altura(nodoDesbalanceado.derecha))
        nuevoPadre.altura = 1 + max(self.obtener_altura(nuevoPadre.izquierda), self.obtener_altura(nuevoPadre.derecha))

        return nuevoPadre
    
    def rotacion_izquierda(self, nodoDesbalanceado):
        # Nodo que será el nuevo padre después de la rotación.
        nuevoPadre = nodoDesbalanceado.derecha

        # Subárbol izquierdo del nuevo padre, que debe ser movido.
        subarbolIzquierdoDeNuevoPadre = nuevoPadre.izquierda

        # Realizar la rotación
        nuevoPadre.izquierda = nodoDesbalanceado
        nodoDesbalanceado.derecha = subarbolIzquierdoDeNuevoPadre

        # Actualizar las alturas de los nodos afectados
        nodoDesbalanceado.altura = 1 + max(self.obtener_altura(nodoDesbalanceado.izquierda), self.obtener_altura(nodoDesbalanceado.derecha))
        nuevoPadre.altura = 1 + max(self.obtener_altura(nuevoPadre.izquierda), self.obtener_altura(nuevoPadre.derecha))

        return nuevoPadre

    def insertar(self, nodo, valor):
        if not nodo:
            return Nodo(valor)
        if valor < nodo.valor:
            nodo.izquierda = self.insertar(nodo.izquierda, valor)
        else:
            nodo.derecha = self.insertar(nodo.derecha, valor)

        nodo.altura = 1 + max(self.obtener_altura(nodo.izquierda), self.obtener_altura(nodo.derecha))
        balance = self.obtener_factor_balance(nodo)

        if balance > 1 and valor < nodo.izquierda.valor:
            return self.rotacion_derecha(nodo)
        if balance < -1 and valor > nodo.derecha.valor:
            return self.rotacion_izquierda(nodo)
        if balance > 1 and valor > nodo.izquierda.valor:
            nodo.izquierda = self.rotacion_izquierda(nodo.izquierda)
            return self.rotacion_derecha(nodo)
        if balance < -1 and valor < nodo.derecha.valor:
            nodo.derecha = self.rotacion_derecha(nodo.derecha)
            return self.rotacion_izquierda(nodo)
        return nodo

    def pre_order(self, nodo):
        if not nodo:
            return
        print(nodo.valor, end=' ')
        self.pre_order(nodo.izquierda)
        self.pre_order(nodo.derecha)
    
    def imprimir_arbol(self, raiz, nivel=0):
        if raiz is None:
            return

        # Imprimir el nivel actual
        print(' ' * (nivel * 2) + ('|-' if nivel > 0 else '') + str(raiz.valor))

        # Imprimir subárbol izquierdo
        self.imprimir_arbol(raiz.izquierda, nivel + 1)

        # Imprimir subárbol derecho
        self.imprimir_arbol(raiz.derecha, nivel + 1)

# Ejemplo de uso
arbol = ArbolAVL()
raiz = None
valores = [10, 20, 30, 40, 50, 25]

"""
10----------------------------- 4
  \
    20------------------------- 3
      \
       30---------------------- 2 (Desbalanceado)
     /     \
0--25       40----------------- 1
              \
               50-------------- 0

"""

for valor in valores:
    raiz = arbol.insertar(raiz, valor)

print("Recorrido pre-order del árbol AVL:")
arbol.pre_order(raiz)

print("\nÁrbol balanceado:")
arbol.imprimir_arbol(raiz)