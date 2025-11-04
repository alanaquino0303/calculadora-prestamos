# Calculadora de Préstamos en C

Este proyecto es una **calculadora de préstamos** desarrollada en el lenguaje C. Permite calcular el monto de las cuotas mensuales de un préstamo a partir del capital inicial, la tasa de interés anual y el plazo en meses. El programa realiza cálculos financieros básicos y ofrece una interfaz por consola simple y directa para el usuario.

---

## Características principales

- Cálculo de la cuota mensual a partir del capital, la tasa de interés y el plazo.
- Interfaz sencilla mediante consola.
- Validación básica de los datos ingresados por el usuario.
- Implementación directa en lenguaje C, ideal para aprendizaje de estructuras de control y funciones matemáticas.
- Compatible con sistemas Linux, macOS y Windows.
- Código fuente comentado y de fácil lectura.

---

## Estructura del proyecto

```
/ calculadora-prestamos
├─ calculadora_prestamos.c       # Código fuente principal.
├─ README.md                     # Documentación del proyecto.
```

---

## Requisitos

Para compilar y ejecutar el programa necesitas:

- Un compilador C (por ejemplo, **GCC** o **Clang**).
- Librería matemática (`-lm`), ya que se utilizan funciones de la biblioteca `<math.h>`.

---

## Ejecución

### En Linux o macOS

1. Abre una terminal en la carpeta donde se encuentra el archivo.
2. Compila el programa con:

   ```bash
   gcc calculadora_prestamos.c -o calculadora -lm
   ```

3. Ejecuta el programa:

   ```bash
   ./calculadora
   ```

### En Windows

1. Abre CMD o PowerShell en el directorio del archivo.
2. Compila con:


  ```bash
   gcc calculadora_prestamos.c -o calculadora.exe -lm
   ```

3. Ejecuta el programa:

   ```bash
   calculadora.exe
   ```

---

## Autor

Alan Aquino.
