#!/usr/bin/env bash

# Carpeta base
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

# Plantilla para main.cpp
TEMPLATE_CPP='#include <iostream>

int main() {
    std::cout << "Ejemplo de práctica en C++" << std::endl;
    return 0;
}'

# Función para generar el contenido del README.md
readme_template() {
cat <<EOF
# � ${1//_/ }  

## � Conceptos clave

- Punto 1
- Punto 2

## � Ejemplo principal

\`\`\`cpp
#include <iostream>

int main() {
    std::cout << "Hola, C++!" << std::endl;
    return 0;
}
\`\`\`

## � Notas

- [ ] Duda o aprendizaje clave
- [ ] Enlace útil relacionado

## � Relacionado con

- Tema anterior
- Tema siguiente
EOF
}

# Crear estructura por módulo
for MODULO in "${MODULOS[@]}"; do
  DIR="$BASE_DIR/$MODULO"
  mkdir -p "$DIR"
  echo "$TEMPLATE_CPP" > "$DIR/main.cpp"
  touch "$DIR/notas.md"
  readme_template "$MODULO" > "$DIR/README.md"
done

echo "✅ Estructura de estudio con README.md creada en '$BASE_DIR/'"

