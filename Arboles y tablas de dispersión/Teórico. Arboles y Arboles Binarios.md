# Introducción a Árboles Binarios
Los árboles binarios son estructuras de datos fundamentales en informática y se usan para almacenar y organizar datos de manera jerárquica. Cada árbol binario consta de nodos conectados por aristas, que pueden tener referencias a uno o dos nodos adicionales, denominados hijos.

##Conceptos Fundamentales
###Definición de Árbol
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

##Ejemplo de implementación
###Primer hijo/Siguiente Hermano:
Mantenemos los hijos de cada nodo en una lista enlazada. Cada nodo tiene dos
referencias: uno a su hijo más a la izquierda y otra a su hermano de la derecha.

##Conceptos Fundamentales
###Árbol binario
Un árbol binario consiste en un conjunto finito de cero o más nodos, tales que:
existe un nodo al que se denomina raíz del árbol y cada nodo puede tener 0, 1 o 2 subárboles, que se denominan subárbol izquierdo y subárbol derecho.

- **Arbol binario equilibrado**: cuando las alturas de los subárboles de cada nodo del árbol se diferencian en una unidad como máximo.
- **Arbol binario lleno**: cuando cada nodo es o bien una hoja o bien posee exactamente dos nodos hijos.
- **Arbol binario completo**: un árbol binario con n niveles está completo si todos los niveles excepto posiblemente el último están completamente llenos, y en el último nivel los nodos están hacia la izquierda.

##Ejemplo de implementación
###Basadas en nodos y punteros

###Basadas en arreglos (implica árbol binario completo)