#1. Organizacion del Proyecto

# Estructura base del directorio miProyectos/:

miProyectos/
├── .gitignore
├── README.md
├── scripts/
│   ├── crear_estructura_estudio_con_readme.sh
│   └── nuevo_modulo.sh
├── docs/
│   └── comandos_utiles.md
├── aprendizaje/
│   └── ... (módulos de estudio)
├── build/
├── bin/
├── src/
├── include/
├── lib/
└── test/

2. Inicializar proyecto con Git

	1. Crear repositorio (solo una vez):
		git init
	2. Conectar con GitHub:
		git remote add origin <URL>
	3. Realizar commits y subir:
		git add .
		git commit - "inicio proyecto"
		git push -u origin main

3. Crear modulos de aprendizaje
Opcion A: Crear todos los modulos iniciales

./scripts/crear_estructura_estudio_con_readme.sh

Esto crea modulos como  01_tipos_y_variables, 02_control_de_flujo, etc, cada uno con:

* main.cpp
* notas.md
* README.md
=====================================================================================
Opcion B: Crear un nuevo modulo personalizado

./scripts/nuevo_modulo.sh 07_vectores_dinamicos

Esto crea automaticamente esa carpeta y su contenido en aprendizaje/ .

======================================================================================

4.Documentacion personal

* Guardar comandos utiles en: docs/comandos_utiles.md
* Guardar resumenes de temas en los README.md de cada modulo.
* Apuntar dudas, ideas y enlaces en notas.md dentro de cada modulo.

=====================================================================================

5. Alias utiles en .bashrc

alias gs='git status'
alias ga='git add .'
alias gc='git commit -m'
alias gp='git push'
alias cls='clear'
alias code="/c/Users/Mauricio/AppData/Local/Programs/Microsoft\ VS\ Code/bin/code"
alias nuevoModulo="bash ~/c/Users/Mauricio/miProyectos/scripts/nuevo_modulo.sh"
alias crearEstudio="bash ~/c/Users/Mauricio/miProyectos/scripts/crear_estructura_estudio_con_readme.sh"

Luego ejecutar:

source ~/.bashrc

======================================================================================

6. Compilar y ejecutar codigo C++

g++ main.cpp -o programa
./programa

======================================================================================

7. Comandos utiles en MSYS2 UCRT64
Navegacion y archivos

cd ruta/          # Entrar a carpeta
cd ..             # Subir nivel
ls                # Listar archivos
nano archivo.txt  # Editar

Automatizacion con for:

for d in tema1 tema2 tema3; do mkdir -p aprendizaje/$d; done

=====================================================================================

8. Guardar todo y subir a GitHub

ga
gc "Avance en módulo X"
gp

======================================================================================
9. Guardado de resumenes
Guardar en:

docs/flujo_trabajo.md

con este comando:

nano docs/flujo_trabajo.md

========================================================================================

10. Script verificacion de modulo existente.

* Verifique si el modulo ya existe
* Avise si quiero sobreescribirlo
* Si respondo no, cancela operacion

Scrip actualizado: scripts/nuevo_modulo.sh

Abrir archivo para editarlo:

nano scripts/nuevo_modulo.sh

Remplaza el contenido completo por este:

#!/usr/bin/env bash

# Validar argumento
if [ -z "$1" ]; then
  echo "❌ Por favor indicá el nombre del módulo. Ejemplo:"
  echo "./scripts/nuevo_modulo.sh 07_vectores_dinamicos"
  exit 1
fi

MODULO="$1"
DIR="aprendizaje/$MODULO"

# Verificar si ya existe
if [ -d "$DIR" ]; then
  echo "⚠️ El módulo '$MODULO' ya existe."
  read -p "¿Querés sobrescribirlo? (s/n): " RESP
  if [[ "$RESP" != "s" ]]; then
    echo "⏹️ Operación cancelada."
    exit 0
  fi
  rm -rf "$DIR"  # Borrar carpeta anterior si acepta sobrescribir
fi

# Plantilla para main.cpp
TEMPLATE_CPP='#include <iostream>

int main() {
    std::cout << "Ejemplo de práctica en C++" << std::endl;
    return 0;
}'

# Función para generar README.md
readme_template() {
cat <<EOF
# ��� ${MODULO//_/ }

## ��� Conceptos clave

- Punto 1
- Punto 2

## ��� Ejemplo principal

\`\`\`cpp
#include <iostream>

int main() {
    std::cout << "Hola, C++!" << std::endl;
    return 0;
}
\`\`\`

## �� Notas

- [ ] Duda o aprendizaje clave
- [ ] Enlace útil relacionado

## ��� Relacionado con

- Tema anterior
- Tema siguiente
EOF
}

# Crear estructura
mkdir -p "$DIR"
echo "$TEMPLATE_CPP" > "$DIR/main.cpp"
touch "$DIR/notas.md"
readme_template > "$DIR/README.md"

echo "✅ Módulo '$MODULO' creado correctamente en $DIR"
=======================================================================================

Como usarlo

1. Ejecuta el script normalmente:

./scripts/nuevo_modulo.sh 07_vectores_dinamicos

2. Si el módulo ya existe, verás algo así:

⚠️ El módulo '07_vectores_dinamicos' ya existe.
¿Querés sobrescribirlo? (s/n):

