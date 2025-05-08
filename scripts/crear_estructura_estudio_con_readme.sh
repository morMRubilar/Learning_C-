#!/usr/bin/env bash

# Carpeta base
BASE_DIR="aprendizaje"

# Lista de mÃ³dulos
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
    std::cout << "Ejemplo de prÃ¡ctica en C++" << std::endl;
    return 0;
}'

# FunciÃ³n para generar el contenido del README.md
readme_template() {
cat <<EOF
# í³˜ ${1//_/ }  

## í·  Conceptos clave

- Punto 1
- Punto 2

## í·ª Ejemplo principal

\`\`\`cpp
#include <iostream>

int main() {
    std::cout << "Hola, C++!" << std::endl;
    return 0;
}
\`\`\`

## í³š Notas

- [ ] Duda o aprendizaje clave
- [ ] Enlace Ãºtil relacionado

## í´ Relacionado con

- Tema anterior
- Tema siguiente
EOF
}

# Crear estructura por mÃ³dulo
for MODULO in "${MODULOS[@]}"; do
  DIR="$BASE_DIR/$MODULO"
  mkdir -p "$DIR"
  echo "$TEMPLATE_CPP" > "$DIR/main.cpp"
  touch "$DIR/notas.md"
  readme_template "$MODULO" > "$DIR/README.md"
done

echo "âœ… Estructura de estudio con README.md creada en '$BASE_DIR/'"

