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

![image](https://github.com/CielitoM/Data-Structures/assets/159088152/d9716b2d-42ce-42e9-8dd7-89b7901eda6b)

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

![image](https://github.com/CielitoM/Data-Structures/assets/159088152/0a8e8c64-fc99-4cb4-8f5a-20b35e1fdd49)

### Basadas en arreglos (implica árbol binario completo)

![image](https://github.com/CielitoM/Data-Structures/assets/159088152/2b803de3-52cf-41db-8c1a-e3e4a8c3b226)

![image](https://github.com/CielitoM/Data-Structures/assets/159088152/824aefc4-81e2-4e89-97a9-ee8ce2031e7c)



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

![image](https://github.com/CielitoM/Data-Structures/assets/159088152/b61b4d08-1fa4-4958-9c1a-9d6440bf05a4)


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

![image](https://github.com/CielitoM/Data-Structures/assets/159088152/3b88dca5-24ce-4bec-a9c0-c09f03435d10)



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



### Coste de recorrido inorden de BST
Si x es la raíz de un subárbol de n nodos, entonces la llamada
RECORRIDO-INORDEN(X) tiene un coste de O(n)

El número de subárboles vacíos en un árbol binario T=nro.nodos+1.


### Operaciones sobre BSTs
#### Búsqueda. 
La operación de **búsqueda** en un ABB tiene como objetivo encontrar un nodo con una clave específica \( k \). Dado un puntero a la raíz del árbol, la operación de búsqueda retornará un puntero al nodo que contiene la clave \( k \) si este nodo existe. Si el nodo con la clave \( k \) no se encuentra en el árbol, la operación retornará `NULO`.

##### Pseudocódigo de la Búsqueda

El algoritmo de búsqueda en un ABB se puede expresar mediante el siguiente pseudocódigo:

BUSQUEDA(x, k)

1. si x == NULO o k == x.clave
2. return x
3. si k < x.clave
4. return BUSQUEDA(x.izq, k)
5. sino
6. return BUSQUEDA(x.der, k)




**Caso Base (Línea 1):**
   - Si el nodo actual `x` es `NULO`, esto significa que hemos llegado al final de un camino sin encontrar la clave \( k \). En este caso, retornamos `NULO`.
   - Si la clave del nodo actual `x` es igual a \( k \), hemos encontrado el nodo que estamos buscando. En este caso, retornamos el puntero al nodo actual `x`.

**Comparación (Línea 3):**
   - Si \( k \) es menor que la clave del nodo actual \( x \), esto significa que si el nodo con clave \( k \) existe, debe estar en el subárbol izquierdo. Por lo tanto, llamamos recursivamente a `BUSQUEDA` en el hijo izquierdo de \( x \) (es decir, `x.izq`).

**Caso Contrario (Línea 5):**
   - Si \( k \) no es menor que la clave del nodo actual \( x \), entonces debe ser mayor. Esto significa que si el nodo con clave \( k \) existe, debe estar en el subárbol derecho. Por lo tanto, llamamos recursivamente a `BUSQUEDA` en el hijo derecho de \( x \) (es decir, `x.der`).

### Ejemplo

Considera el siguiente Árbol Binario de Búsqueda:


![image](https://github.com/CielitoM/Data-Structures/assets/159088152/60b39572-b3e6-46fb-823f-29ca63c03ac6)


Supongamos que queremos buscar la clave `7`:

1. Comenzamos en la raíz: `x = 10`.
   - \( 7 < 10 \), así que llamamos a `BUSQUEDA(5, 7)`.

2. Ahora estamos en el nodo `5`.
   - \( 7 > 5 \), así que llamamos a `BUSQUEDA(7, 7)`.

3. Ahora estamos en el nodo `7`.
   - \( 7 == 7 \), hemos encontrado el nodo y retornamos el puntero a este nodo.

Si quisiéramos buscar una clave que no existe, como `8`, el algoritmo seguiría el mismo proceso, pero eventualmente llegaría a un nodo `NULO`, indicando que la clave no está presente en el árbol.



#### Mínimo. 
Para encontrar el nodo con la clave mínima en un ABB, seguimos los punteros del hijo izquierdo desde la raíz hasta que encontramos un nodo que no tiene hijo izquierdo (es decir, cuyo puntero izquierdo es `NULO`). Este nodo es el que contiene la clave mínima.

##### Pseudocódigo de la Búsqueda del Mínimo
El algoritmo para encontrar el mínimo en un ABB se puede expresar mediante el siguiente pseudocódigo:

MINIMO(x)
1. mientras x.izq != NULO
2. x = x.izq
3. return x


1. **Inicialización:**
   - Comenzamos en el nodo `x` (que usualmente es la raíz del árbol).

2. **Desplazamiento a la Izquierda (Línea 1):**
   - Mientras el nodo actual `x` tenga un hijo izquierdo (es decir, `x.izq` no sea `NULO`), continuamos moviéndonos al hijo izquierdo (`x = x.izq`).

3. **Retorno del Mínimo (Línea 3):**
   - Una vez que hemos encontrado un nodo que no tiene hijo izquierdo (cuando `x.izq` es `NULO`), este nodo es el que contiene la clave mínima. Retornamos este nodo `x`.

### Ejemplo

Considera el siguiente Árbol Binario de Búsqueda:



![image](https://github.com/CielitoM/Data-Structures/assets/159088152/a0389753-cddf-44ad-889d-b7467e364e25)




Supongamos que queremos encontrar la clave mínima:

1. Comenzamos en la raíz: `x = 10`.
   - `x.izq` es `5`, así que nos movemos al nodo `5`.

2. Ahora estamos en el nodo `5`.
   - `x.izq` es `3`, así que nos movemos al nodo `3`.

3. Ahora estamos en el nodo `3`.
   - `x.izq` es `NULO`, por lo que hemos encontrado el nodo con la clave mínima.

El nodo `3` es el nodo con la clave mínima en este árbol.


### Máximo. 
Para encontrar el nodo con la clave máxima en un ABB, seguimos los punteros del hijo derecho desde la raíz hasta que encontramos un nodo que no tiene hijo derecho (es decir, cuyo puntero derecho es `NULO`). Este nodo es el que contiene la clave máxima.

#### Pseudocódigo de la Búsqueda del Máximo

El algoritmo para encontrar el máximo en un ABB se puede expresar mediante el siguiente pseudocódigo:

MAXIMO(x)

1. mientras x.der != NULO
2. x = x.der
3. return x

#### Explicación paso a paso:
1. **Inicialización:**
   - Comenzamos en el nodo `x` (que usualmente es la raíz del árbol).

2. **Desplazamiento a la Derecha (Línea 1):**
   - Mientras el nodo actual `x` tenga un hijo derecho (es decir, `x.der` no sea `NULO`), continuamos moviéndonos al hijo derecho (`x = x.der`).

3. **Retorno del Máximo (Línea 3):**
   - Una vez que hemos encontrado un nodo que no tiene hijo derecho (cuando `x.der` es `NULO`), este nodo es el que contiene la clave máxima. Retornamos este nodo `x`.

## Ejemplo

Considera el siguiente Árbol Binario de Búsqueda:


![image](https://github.com/CielitoM/Data-Structures/assets/159088152/558ced4b-c95e-46b4-82db-dfa411de006a)




Supongamos que queremos encontrar la clave máxima:

1. Comenzamos en la raíz: `x = 10`.
   - `x.der` es `20`, así que nos movemos al nodo `20`.

2. Ahora estamos en el nodo `20`.
   - `x.der` es `25`, así que nos movemos al nodo `25`.

3. Ahora estamos en el nodo `25`.
   - `x.der` es `NULO`, por lo que hemos encontrado el nodo con la clave máxima.

El nodo `25` es el nodo con la clave máxima en este árbol.


#### Coste de mínimo y máximo:
Máximo y mínimo tienen coste O(h) para un árbol de altura h, debido a que la
secuencia de nodos forma un camino simple hacia abajo desde la raíz.


### Sucesor:
El sucesor de un nodo `x` en un ABB es el nodo con la menor clave que es mayor que `x.clave`. Si `x` tiene un hijo derecho, el sucesor será el nodo con la clave mínima en el subárbol derecho de `x`. Si `x` no tiene hijo derecho, el sucesor será el primer ancestro de `x` cuyo hijo izquierdo también es ancestro de `x`.

#### Pseudocódigo de la Búsqueda del Sucesor

El algoritmo para encontrar el sucesor en un ABB se puede expresar mediante el siguiente pseudocódigo:


SUCESOR(x)

1. si x.der != NULO
2. return MINIMO(x.der)
3. y = x.p
4. mientras y != NULO and x == y.der
5. x = y
6. y = y.p
7. return y
8. 
##### Explicación Paso a Paso

1. **Caso 1: Subárbol Derecho Existe (Línea 1):**
   - Si `x` tiene un hijo derecho (`x.der != NULO`), el sucesor de `x` es el nodo con la clave mínima en el subárbol derecho de `x`. Utilizamos la función `MINIMO` para encontrar este nodo.

2. **Caso 2: Sin Subárbol Derecho (Línea 3):**
   - Si `x` no tiene un hijo derecho, necesitamos encontrar el primer ancestro `y` de `x` tal que `x` es un descendiente del hijo izquierdo de `y`.

3. **Subimos en el Árbol (Línea 4):**
   - Inicializamos `y` como el padre de `x` (`y = x.p`).
   - Mientras `y` no sea `NULO` y `x` sea el hijo derecho de `y` (`x == y.der`), continuamos subiendo en el árbol:
     - `x` toma el valor de `y`.
     - `y` toma el valor del padre de `y`.

4. **Retorno del Sucesor (Línea 7):**
   - Una vez que encontramos el nodo `y` que satisface las condiciones, este nodo es el sucesor de `x`. Si no encontramos tal nodo, retornamos `NULO`, lo que indica que `x` tiene la clave mayor en el árbol.

### Ejemplo

Considera el siguiente Árbol Binario de Búsqueda:

![image](https://github.com/CielitoM/Data-Structures/assets/159088152/8da3dfd4-3137-4a40-b668-6f2ab4809dbb)



Supongamos que queremos encontrar el sucesor del nodo con clave `7`:

1. **Nodo con clave `7` no tiene hijo derecho:**
   - Procedemos al paso 3.

2. **Inicialización:**
   - `y` es el padre de `7`, que es `6`.
   - `x` es `7`.

3. **Subimos en el Árbol:**
   - `x` no es el hijo derecho de `y` (`x != y.der`), así que salimos del bucle.

4. **Retorno del Sucesor:**
   - Retornamos `y`, que es `13`, el sucesor de `7`.

#### Teorema. 
Podemos implementar las operaciones
BUSQUEDA,MINIMO,MAXIMO,SUCESOR, PREDECESOR, de tal manera que cada uno
tenga como coste O(h) en un BST de altura h.

Inserción. 
La operación de inserción en un BST implica colocar un nuevo nodo `z` en su posición correcta dentro del árbol de manera que se mantenga la propiedad del BST. La propiedad del BST establece que, para cada nodo `n`, todos los nodos en el subárbol izquierdo de `n` tienen claves menores que la clave de `n`, y todos los nodos en el subárbol derecho de `n` tienen claves mayores que la clave de `n`.

#### Pseudocódigo de la Inserción

El pseudocódigo para la inserción de un nuevo nodo `z` en un BST `T` es el siguiente:

INSERTAR(T, z)
1. y = NULO

2. X = T.root
3. mientras x =! NULO
4. y = x
5. si z.clave ﹤ x.clave
6. x = x.left
7. sino x = x.der
8. z.p = y
9. si y == NULO
10. t.root = z
11.sino si z.clave ﹤ y.clave
12. y.izq = z
13.sino y.der = z

#### Explicación Paso a Paso

1. **Inicialización (Línea 1):**
   - `y` se inicializa como `NULO`. Este puntero `y` se utilizará para mantener el rastro del nodo padre de `x`.

2. **Comenzar desde la Raíz (Línea 2):**
   - `x` se inicializa como la raíz del árbol `T`.

3. **Búsqueda de la Posición Correcta (Líneas 3-8):**
   - Mientras `x` no sea `NULO`, el bucle se ejecuta para encontrar la posición correcta para insertar `z`.
   - En cada iteración, `y` se actualiza para que apunte al nodo actual `x`.
   - Si la clave de `z` es menor que la clave de `x`, `x` se mueve al hijo izquierdo (`x.left`).
   - De lo contrario, `x` se mueve al hijo derecho (`x.der`).

4. **Establecer el Padre del Nuevo Nodo (Línea 9):**
   - Una vez encontrado el lugar adecuado, `z.p` se establece como `y`.

5. **Insertar el Nodo en la Raíz (Línea 10-11):**
   - Si `y` es `NULO` (lo que significa que el árbol estaba vacío), `z` se convierte en la nueva raíz del árbol.

6. **Insertar el Nodo como Hijo Izquierdo o Derecho (Líneas 12-15):**
   - Si `z.clave` es menor que `y.clave`, `z` se inserta como el hijo izquierdo de `y`.
   - De lo contrario, `z` se inserta como el hijo derecho de `y`.

### Ejemplo

Considera el siguiente BST y la inserción de un nuevo nodo `z` con clave `13`:

![image](https://github.com/CielitoM/Data-Structures/assets/159088152/50c3307c-920a-4270-9ac1-0f80e6340e99)
