#!/usr/bin/env bash

# Validar argumento
if [ -z "$1" ]; then
  echo "❌ Por favor indicá el nombre del módulo. Ejemplo:"
  echo "./scripts/nuevo_modulo.sh 07_vectores_dinamicos"
  exit 1
fi

MODULO="$1"
DIR="aprendizaje/$MODULO"

# Plantilla para main.cpp
TEMPLATE_CPP='#include <iostream>

int main() {
    std::cout << "Ejemplo de práctica en C++" << std::endl;
    return 0;
}'

# Función para generar README.md
readme_template() {
cat <<EOF
# � ${MODULO//_/ }

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

# Función para generar notas.md
notas_template() {
cat <<EOF
# � Notas del módulo: ${MODULO//_/ }

## � Descripción
Escribe aquí la descripción del módulo.

## � Conceptos clave
- Concepto 1
- Concepto 2
- Concepto 3

## �‍� Ejemplos de código
\`\`\`cpp
// Escribe aquí tus ejemplos de código en C++
\`\`\`

## �️ Herramientas y técnicas
- Técnica 1
- Herramienta 1

## ⚠️ Problemas encontrados
- Descripción del problema
- Solución propuesta

## � Recursos adicionales
- [Enlace al recurso](URL)
EOF
}

# Crear estructura
mkdir -p "$DIR"
echo "$TEMPLATE_CPP" > "$DIR/main.cpp"
readme_template > "$DIR/README.md"
notas_template > "$DIR/notas.md"

echo "✅ Módulo '$MODULO' creado correctamente en $DIR"


