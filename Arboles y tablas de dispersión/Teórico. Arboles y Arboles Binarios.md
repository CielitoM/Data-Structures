# Introducción a Árboles Binarios
Los árboles binarios son estructuras de datos fundamentales en informática y se usan para almacenar y organizar datos de manera jerárquica. Cada árbol binario consta de nodos conectados por aristas, que pueden tener referencias a uno o dos nodos adicionales, denominados hijos.

## Conceptos Fundamentales
### Definición de Árbol
Un árbol es un conjunto finito de uno o más nodos, tales que:


- **Árbol nulo o vacío**:
Un árbol que no posee ningún nodo se llama árbol nulo o árbol vacío. Este es un caso especial donde el conjunto de nodos es vacío.
- **Raíz del árbol**: Si un árbol no está vacío, debe tener un nodo raíz. Entonces, los otros elementos o nodos derivan o descienden de él. La característica fundamental es que este nodo en particular no tiene padre.
- **Nodo**: Son los vértices o elementos de un árbol.
- **Arista**: Es un puntero o referencia que asocia a un nodo con los subárboles.
- **Nodo terminal u hoja**: Es aquel nodo que no tiene ningún subárbol (o bien los dos subárboles que derivan de él son árboles vacíos).
- **Hijos**: Son nodos asociados directamente a un nodo, tal vez a través de punteros, referencias, índices u otros.
- **Descendientes**: Son uno o más subárboles asociados a un nodo.
- **Antecesor o ascendente**: Nodo a través del cual se conectan uno o más subárboles al árbol principal.
- **Hermanos**: Nodos relacionados a un mismo padre.
- **Nodos interiores o internos**: Nodos enlazados al menos a un subárbol.
- **Bosque**: Colección de dos o más árboles.
- **Camino**: Es una secuencia de nodos en un árbol tales que \( n_i \) es antecesor de \( n_{i+k} \) para \( 1 \leq i < k \).
- **Rama**: Es un camino que termina en un nodo hoja del árbol.
- **Nivel**: Es un número que se determina por la longitud del camino desde el nodo raíz al nodo específico.
- **Profundidad**: Es la longitud del camino desde la raíz hasta un nodo \( x \).
- **Altura del árbol**: Es el camino más largo entre el nodo raíz hasta algún nodo hoja. Equivale al nivel más alto de los nodos más uno.
- **Subárboles**:
Los otros nodos del conjunto (v2, v3, ... , vn) pueden ser divididos en m ≥ 0 conjuntos disjuntos llamados A1, A2, ..., Am.
Cada uno de esos conjuntos es un árbol por sí mismo y se denomina "subárbol" del nodo raíz. 
Esto significa que cada conjunto Ai sigue las mismas reglas de definición de un árbol, teniendo su propia raíz y subárboles.
![Captura de pantalla 2024-07-06 192912](https://github.com/CielitoM/Data-Structures/assets/159088152/c76434ba-5e85-4658-afd5-f2fcd9595d1c)
![Captura de pantalla 2024-07-06 192933](https://github.com/CielitoM/Data-Structures/assets/159088152/8c78d9a7-cecf-436f-84a1-41abe9441024)
![Captura de pantalla 2024-07-06 192958](https://github.com/CielitoM/Data-Structures/assets/159088152/5b0d2e46-86a6-4bb1-a481-66ff1d67812d)






## Ejemplo de implementación
### Primer hijo/Siguiente Hermano:
Mantenemos los hijos de cada nodo en una lista enlazada. Cada nodo tiene dos
referencias: uno a su hijo más a la izquierda y otra a su hermano de la derecha.

![Captura de pantalla 2024-07-06 193012](https://github.com/CielitoM/Data-Structures/assets/159088152/b79affa1-07a2-49e0-b68a-a0a678694c2d)


## Conceptos Fundamentales
### Árbol binario
Un árbol binario consiste en un conjunto finito de cero o más nodos, tales que:
existe un nodo al que se denomina raíz del árbol y cada nodo puede tener 0, 1 o 2 subárboles, que se denominan subárbol izquierdo y subárbol derecho.


![Captura de pantalla 2024-07-06 193031](https://github.com/CielitoM/Data-Structures/assets/159088152/d78ae720-22ae-49c7-b79f-2cc9419feacf)


- **Arbol binario equilibrado**: cuando las alturas de los subárboles de cada nodo del árbol se diferencian en una unidad como máximo.
- **Arbol binario lleno**: cuando cada nodo es o bien una hoja o bien posee exactamente dos nodos hijos.
- **Arbol binario completo**: un árbol binario con n niveles está completo si todos los niveles excepto posiblemente el último están completamente llenos, y en el último nivel los nodos están hacia la izquierda.

![Captura de pantalla 2024-07-06 193052](https://github.com/CielitoM/Data-Structures/assets/159088152/b5da4311-ecbf-4fb5-9057-cbdbcb6df6bd)
![Captura de pantalla 2024-07-06 193102](https://github.com/CielitoM/Data-Structures/assets/159088152/33714f97-a5cc-454c-b13b-71efb7c04c9e)
![Captura de pantalla 2024-07-06 193121](https://github.com/CielitoM/Data-Structures/assets/159088152/69e7452a-3c4a-4350-aa06-aeb850df0b2f)
![Captura de pantalla 2024-07-06 193128](https://github.com/CielitoM/Data-Structures/assets/159088152/fde935c0-6a7a-45fd-b77f-f11e0633eab3)
![Captura de pantalla 2024-07-06 193151](https://github.com/CielitoM/Data-Structures/assets/159088152/299c9844-1271-4c06-bb09-8f50b21ba4f1)



## Ejemplo de implementación
### Basadas en nodos y punteros

### Basadas en arreglos (implica árbol binario completo)



## Árboles Binarios de Búsqueda (ABB)

Un **Árbol Binario de Búsqueda** (ABB) es una estructura de datos que permite realizar búsquedas de manera eficiente. 

### Estructura de un ABB

Un ABB es un tipo especial de árbol binario que está estructurado de forma que facilita las búsquedas eficientes. La estructura básica incluye nodos, donde cada nodo es un objeto que contiene:

- **Clave**: Un valor que se usa para organizar el árbol.
- **Datos satélite**: Información adicional que puede almacenar cada nodo.
- **Atributos de enlace**:
  - `izquierda`: Apunta al hijo izquierdo.
  - `derecha`: Apunta al hijo derecho.
  - `p`: Apunta al nodo padre.

### Propiedad Fundamental de los ABBs

La propiedad fundamental que define un Árbol Binario de Búsqueda es la relación entre las claves de los nodos y sus subárboles. Esta propiedad asegura que el árbol está organizado de manera que permite realizar búsquedas de manera eficiente. La propiedad se puede enunciar así:

- Sea \( x \) un nodo en un ABB:
  - **Subárbol Izquierdo**: Si \( y \) es un nodo del subárbol izquierdo de \( x \), entonces la clave de \( y \) (\( y.clave \)) es menor o igual que la clave de \( x \) (\( x.clave \)).
  - **Subárbol Derecho**: Si \( y \) es un nodo del subárbol derecho de \( x \), entonces la clave de \( y \) (\( y.clave \)) es mayor o igual que la clave de \( x \) (\( x.clave \)).

### Ejemplo

Considera el siguiente Árbol Binario de Búsqueda:

10

├── 5

│   ├── 3

│   └── 7

├── 20

│   ├── 15

│   └──  25


En este árbol:

- El nodo con la clave `10` tiene:
  - Un subárbol izquierdo con claves `5`, `3`, y `7` (todas ≤ 10).
  - Un subárbol derecho con claves `20`, `15`, y `25` (todas ≥ 10).
- El nodo con la clave `5` tiene:
  - Un subárbol izquierdo con la clave `3` (≤ 5).
  - Un subárbol derecho con la clave `7` (≥ 5).
- Y así sucesivamente para cada nodo en el árbol.

### Representación en Memoria

En memoria, los nodos de un ABB se pueden representar usando listas enlazadas. Cada nodo tiene enlaces (`p` para el padre, `izquierda` para el hijo izquierdo y `derecha` para el hijo derecho) que permiten navegar por el árbol.

Esta estructura permite realizar operaciones de búsqueda, inserción y eliminación de manera eficiente. Al seguir la propiedad fundamental de los ABBs, las operaciones de búsqueda pueden aprovechar la organización del árbol para reducir significativamente el número de comparaciones necesarias en promedio.




### Recorridos
#### Recorrido Inorden

El **recorrido inorden** es una forma de recorrer un árbol binario en la que las claves se procesan en orden ascendente. Este recorrido es especialmente útil en los Árboles Binarios de Búsqueda (ABB) porque garantiza que las claves se procesan en su secuencia natural.

###### Algoritmo del Recorrido Inorden

El recorrido inorden se realiza mediante un algoritmo recursivo simple. La idea básica es procesar las claves de la siguiente manera:

1. Procesar (recorrer) el subárbol izquierdo.
2. Procesar (visitar) el nodo actual.
3. Procesar (recorrer) el subárbol derecho.

###### Pseudocódigo

A continuación, se muestra el pseudocódigo para el recorrido inorden de un árbol binario:

RECORRIDO_INORDEN(X)

si x != NULO
RECORRIDO_INORDEN(x.izq)
imprimir x.clave
RECORRIDO_INORDEN(x.der)



###### Explicación Paso a Paso

1. **Verificar si el nodo es NULO:**
   - Si el nodo actual (`x`) es `NULO`, no se hace nada y se retorna.
   - Esta es la condición base de la recursión que asegura que el algoritmo se detenga cuando llega a un nodo hoja.

2. **Procesar el subárbol izquierdo:**
   - Llamar recursivamente a `RECORRIDO_INORDEN` con el hijo izquierdo de `x`.
   - Esto asegura que todos los nodos en el subárbol izquierdo se procesen antes que el nodo actual.

3. **Visitar el nodo actual:**
   - Imprimir la clave del nodo actual (`x.clave`).
   - En este punto, se está "visitando" el nodo actual después de haber procesado todos los nodos de su subárbol izquierdo.

4. **Procesar el subárbol derecho:**
   - Llamar recursivamente a `RECORRIDO_INORDEN` con el hijo derecho de `x`.
   - Esto asegura que todos los nodos en el subárbol derecho se procesen después que el nodo actual.

### Ejemplo

Considera el siguiente Árbol Binario de Búsqueda:

10

├── 5

│   ├── 3

│   └── 7

├── 20

│   ├── 15

│   └──  25


El recorrido inorden de este árbol sería:

1. Procesar el subárbol izquierdo de `10` (claves `5`, `3`, `7`):
   - Procesar el subárbol izquierdo de `5` (clave `3`): imprimir `3`
   - Visitar `5`: imprimir `5`
   - Procesar el subárbol derecho de `5` (clave `7`): imprimir `7`
2. Visitar `10`: imprimir `10`
3. Procesar el subárbol derecho de `10` (claves `20`, `15`, `25`):
   - Procesar el subárbol izquierdo de `20` (clave `15`): imprimir `15`
   - Visitar `20`: imprimir `20`
   - Procesar el subárbol derecho de `20` (clave `25`): imprimir `25`

El resultado del recorrido inorden será: `3, 5, 7, 10, 15, 20, 25`.


El recorrido inorden es una técnica recursiva para procesar las claves de un árbol binario en orden ascendente. Procesa primero el subárbol izquierdo, luego el nodo actual y finalmente el subárbol derecho. Este método es especialmente útil en Árboles Binarios de Búsqueda, donde garantiza que las claves se procesen en orden creciente.
