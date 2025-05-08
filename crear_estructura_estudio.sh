#!/usr/bin/env bash

# Carpeta base donde se va a crear todo
BASE_DIR="aprendizaje"

# Lista de módulos
MODULOS=(
  "01_tipos_y_variables"
  "02_control_de_flujo"
  "03_funciones"
  "04_estructuras"
  "05_punteros"
  "06_clases_y_objetos"
)

# Crear la carpeta base si no existe
mkdir -p "$BASE_DIR"

# Archivo base main.cpp
TEMPLATE_CPP='#include <iostream>

int main() {
    std::cout << "Ejemplo de práctica en C++" << std::endl;
    return 0;
}'

# Crear estructura por módulo
for MODULO in "${MODULOS[@]}"; do
  DIR="$BASE_DIR/$MODULO"
  mkdir -p "$DIR"
  echo "$TEMPLATE_CPP" > "$DIR/main.cpp"
  touch "$DIR/notas.md"
done

echo "✅ Estructura de estudio creada en $BASE_DIR/"

