class TablaHash:
    def __init__(self, tamaño):
        self.tamaño = tamaño
        self.tabla = [None] * tamaño

    def funcion_hash(self, clave):
        return hash(clave) % self.tamaño

    def insertar(self, clave, valor):
        indice = self.funcion_hash(clave)
        if self.tabla[indice] is None:
            self.tabla[indice] = []
        # Verifica si la clave ya existe y la actualiza
        for par in self.tabla[indice]:
            if par[0] == clave:
                par[1] = valor
                return
        self.tabla[indice].append([clave, valor])

    def buscar(self, clave):
        indice = self.funcion_hash(clave)
        if self.tabla[indice] is None:
            return None
        for par in self.tabla[indice]:
            if par[0] == clave:
                return par[1]
        return None

    def eliminar(self, clave):
        indice = self.funcion_hash(clave)
        if self.tabla[indice] is None:
            return False
        for i, par in enumerate(self.tabla[indice]):
            if par[0] == clave:
                del self.tabla[indice][i]
                return True
        return False

# Ejemplo de uso
tabla_hash = TablaHash(10)
tabla_hash.insertar("nombre", "Alice")
tabla_hash.insertar("edad", 30)
tabla_hash.insertar("ciudad", "Madrid")

print(tabla_hash.buscar("nombre"))  # Output: Alice
print(tabla_hash.buscar("edad"))    # Output: 30

tabla_hash.eliminar("ciudad")
print(tabla_hash.buscar("ciudad"))  # Output: None
