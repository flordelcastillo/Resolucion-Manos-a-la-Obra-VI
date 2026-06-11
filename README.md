# Manos a la obra 7 — Arrays y Strings en C

Colección de 6 ejercicios en C sobre manejo de arrays y strings. Todos usan bucles `while`.

---

## main1.c — 100 primeros enteros

**Consigna:** Rellenar un array con los 100 primeros números enteros y mostrarlos en orden ascendente.

**Variables:**
- `array[100]` — almacena los enteros del 1 al 100
- `i` — índice del bucle

**Funcionamiento:**
1. Primer `while`: llena el array con `array[i] = i + 1` (da valores 1 a 100)
2. Segundo `while`: imprime cada elemento en orden ascendente

**Salida esperada:**
```
Número: 1
Número: 2
...
Número: 100
```

---

## main2.c — 50 primeros números pares

**Consigna:** Rellenar un array con los 50 primeros números enteros pares y mostrarlos en orden ascendente.

**Variables:**
- `array[50]` — almacena los 50 números pares
- `i` — contador que recorre números desde 1 en adelante
- `j` — índice del array (se incrementa solo al encontrar un par)

**Funcionamiento:**
1. Primer `while`: recorre números con `i`, usa `i % 2 == 0` para detectar pares y los guarda en `array[j]`
2. Segundo `while`: imprime el array en orden ascendente

**Salida esperada:**
```
Número: 2
Número: 4
...
Número: 100
```

---

## main3.c — 50 primeros números impares (descendente)

**Consigna:** Rellenar un array con los 50 primeros números enteros impares y mostrarlos en orden descendente.

**Variables:**
- `array[50]` — almacena los 50 números impares
- `i` — contador que recorre números desde 1 en adelante
- `j` — índice del array (se incrementa solo al encontrar un impar)

**Funcionamiento:**
1. Primer `while`: usa `i % 2 != 0` para detectar impares y los guarda en `array[j]`
2. Segundo `while`: imprime el array desde el índice 49 hasta 0 (orden descendente)

**Salida esperada:**
```
Número: 99
Número: 97
...
Número: 1
```

---

## main4.c — Promedio, mayor y menor de 10 números

**Consigna:** Leer 10 números por teclado, almacenarlos en un array y mostrar el promedio, el mayor y el menor.

**Variables:**
- `array[10]` — almacena los 10 números ingresados
- `i` — índice del bucle
- `suma` — acumula la suma de todos los números
- `mayor` / `menor` — se inicializan con el primer elemento ingresado
- `promedio` — resultado como `float`

**Funcionamiento:**
1. `while` de 10 iteraciones: pide un número, lo guarda, actualiza `mayor` y `menor` y acumula en `suma`
2. Al terminar calcula `promedio = (float)suma / 10` e imprime los tres resultados

**Salida esperada:**
```
Ingrese un numero: ...
(x10)
Promedio: 5.500000
Mayor: 10
Menor: 1
```

---

## main5.c — String al revés

**Consigna:** Leer un string y mostrarlo al revés.

**Variables:**
- `nombre[100]` — string ingresado por el usuario
- `reves[100]` — string resultado invertido
- `len` — longitud real del string (obtenida con `strlen`)
- `i` — recorre `nombre` de atrás hacia adelante
- `j` — índice de escritura en `reves`

**Funcionamiento:**
1. Lee el string con `scanf("%99s", nombre)` (límite de 99 chars para evitar overflow)
2. Calcula `len = strlen(nombre)`
3. `while` desde `i = len - 1` hasta `i >= 0`: copia cada carácter en `reves` de atrás para adelante
4. Agrega `'\0'` al final de `reves` y lo imprime

**Salida esperada:**
```
Ingrese su nombre: Hola
nombre al reves: aloH
```

---

## main6.c — Diferencias entre dos strings

**Consigna:** Leer dos strings y mostrar las diferencias carácter a carácter.

**Variables:**
- `str1[100]`, `str2[100]` — los dos strings ingresados
- `len1`, `len2` — longitudes de cada string
- `maxLen` — longitud del string más largo (para recorrer ambos completos)
- `haydif` — flag que indica si se encontró alguna diferencia
- `c1`, `c2` — carácter actual de cada string (usa `'\0'` si ese string ya terminó)
- `i` — índice del bucle

**Funcionamiento:**
1. Compara con `strcmp`: si son iguales lo informa y termina
2. Si son distintos, recorre hasta `maxLen` con un `while`
3. Por cada posición donde `c1 != c2` imprime la posición y ambos caracteres; si uno de los strings terminó antes muestra `"(fin)"`

**Salida esperada:**
```
Ingrese el string 1: Hola
Ingrese el string 2: Hora

Diferencias:
Posicion String 1     String 2
------------------------------------
3        l            r
```
