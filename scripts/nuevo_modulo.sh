#!/usr/bin/env bash

# Validar argumento
if [ -z "$1" ]; then
  echo "‚ùå Por favor indic√° el nombre del m√≥dulo. Ejemplo:"
  echo "./scripts/nuevo_modulo.sh 07_vectores_dinamicos"
  exit 1
fi

MODULO="$1"
DIR="aprendizaje/$MODULO"

# Plantilla para main.cpp
TEMPLATE_CPP='#include <iostream>

int main() {
    std::cout << "Ejemplo de pr√°ctica en C++" << std::endl;
    return 0;
}'

# Funci√≥n para generar README.md
readme_template() {
cat <<EOF
# Ì≥ò ${MODULO//_/ }

## Ì¥ë Conceptos clave

- Punto 1
- Punto 2

## Ì≤ª Ejemplo principal

\`\`\`cpp
#include <iostream>

int main() {
    std::cout << "Hola, C++!" << std::endl;
    return 0;
}
\`\`\`

## Ì≥ù Notas

- [ ] Duda o aprendizaje clave
- [ ] Enlace √∫til relacionado

## Ì¥ó Relacionado con

- Tema anterior
- Tema siguiente
EOF
}

# Funci√≥n para generar notas.md
notas_template() {
cat <<EOF
# Ì≥ù Notas del m√≥dulo: ${MODULO//_/ }

## Ì≥ò Descripci√≥n
Escribe aqu√≠ la descripci√≥n del m√≥dulo.

## Ì≥ñ Conceptos clave
- Concepto 1
- Concepto 2
- Concepto 3

## Ì∑ë‚ÄçÌ≤ª Ejemplos de c√≥digo
\`\`\`cpp
// Escribe aqu√≠ tus ejemplos de c√≥digo en C++
\`\`\`

## Ìª†Ô∏è Herramientas y t√©cnicas
- T√©cnica 1
- Herramienta 1

## ‚ö†Ô∏è Problemas encontrados
- Descripci√≥n del problema
- Soluci√≥n propuesta

## Ì≥ë Recursos adicionales
- [Enlace al recurso](URL)
EOF
}

# Crear estructura
mkdir -p "$DIR"
echo "$TEMPLATE_CPP" > "$DIR/main.cpp"
readme_template > "$DIR/README.md"
notas_template > "$DIR/notas.md"

echo "‚úÖ M√≥dulo '$MODULO' creado correctamente en $DIR"


