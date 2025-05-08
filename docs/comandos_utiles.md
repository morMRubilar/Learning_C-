# 🛠️ Comandos útiles y alias – Ayuda memoria (MSYS2 UCRT64)

Este documento reúne comandos frecuentes, bucles, y alias para trabajar cómodamente en un entorno de desarrollo con MSYS2, Git y C++ en Visual Studio Code.

---

## 📁 1. Manejo de directorios y archivos

```bash
pwd                               # Mostrar ruta actual
ls                                # Listar archivos
cd ..                                # Subir un nivel en la jerarquía de directorios
cd ruta/del/directorio               # Ir a un directorio específico (ruta relativa)
cd /ruta/absoluta                    # Ir a un directorio especificado por su ruta completa
cd ~                                 # Ir al directorio home del usuario (equivalente a /c/Users/Mauricio)
cd -                                 # Volver al directorio anterior
cd ../aprendizaje                    # Subir un nivel y entrar en 'aprendizaje' (desde cualquier subdirectorio)
cd /c/Users/Mauricio/miProyectos/aprendizaje # Ir directamente a 'aprendizaje' desde cualquier lugar
mkdir -p carpeta/subcarpeta       # Crear carpeta (incluyendo anidadas)
touch archivo.txt                 # Crear archivo vacío
nano archivo.txt                 # Editar archivo con nano
cat archivo.txt                  # Ver contenido de un archivo
cp origen destino                # Copiar archivo
mv viejo_nombre nuevo_nombre     # Renombrar / mover archivo
rm archivo.txt                   # Eliminar archivo
chmod +x archivo.sh              # Dar permisos de ejecución a script

🔁 2. Bucles útiles (for)
Crear múltiples carpetas:

for dir in carpeta1 carpeta2 carpeta3; do
  mkdir -p $dir
done

Crear carpetas de módulos de aprendizaje:

for dir in 01_tipos_y_variables 02_control_de_flujo 03_funciones; do
  mkdir -p aprendizaje/$dir
done

🖥️ 3. Compilación y ejecución en C++

g++ archivo.cpp -o programa    # Compilar archivo fuente
./programa                    # Ejecutar programa

🔧 4. Git básico

git init                       # Inicializar repositorio Git
git status                     # Ver estado del repositorio
git add .                      # Agregar todos los cambios al staging
git commit -m "mensaje"        # Crear commit con mensaje
git push origin main           # Subir cambios a GitHub

💡 5. Alias recomendados (~/.bashrc)

Agregar estos alias al final del archivo ~/.bashrc:

# Git
alias gs='git status'
alias ga='git add .'
alias gc='git commit -m'
alias gp='git push'

# Utilidad general
alias cls='clear'
alias code="/c/Users/Mauricio/AppData/Local/Programs/Microsoft\ VS\ Code/bin/code"
alias crearEstudio="bash ~/c/Users/Mauricio/miProyectos/scripts/crear_estructura_estudio_con_readme.sh"
alias nuevoModulo="bash ~/c/Users/Mauricio/miProyectos/scripts/nuevo_modulo.sh"
alias nuevoModulo="/c/Users/Mauricio/miProyectos/scripts/nuevo_modulo.sh"


Después de editarlos, ejecutá:

source ~/.bashrc

🧰 6. Visual Studio Code

code archivo.txt        # Abrir archivo con VS Code
which code              # Ver si VS Code está disponible en PATH

📌 7. Atajos en nano

    Ctrl + O → Guardar

    Enter → Confirmar nombre de archivo

    Ctrl + X → Salir

    Ctrl + W → Buscar en el archivo

🧠 8. Buenas prácticas

    Usar bucles for para crear estructuras repetitivas rápidamente

    Documentar alias y comandos que te resultan útiles

    Usar README.md y notas.md dentro de cada módulo para registrar aprendizajes y ejemplos

    Hacer commits frecuentes y claros con Git

    📂 Ubicación sugerida:
Guardá este archivo como:

docs/comandos_utiles.md

Podés abrirlo con:

nano docs/comandos_utiles.md

✅ Comando directo para cambiar de directorio:

cd ../aprendizaje

🔹 Este comando hace lo siguiente:

    .. sube un nivel desde docs a miProyectos

    aprendizaje entra directo en la carpeta deseada

📝 Alternativas útiles para agregar a tu archivo comandos_utiles.md:

cd ../aprendizaje                # Desde un subdirectorio, subir y entrar directo a 'aprendizaje'
cd /c/Users/Mauricio/miProyectos/aprendizaje   # Ruta absoluta desde cualquier punto

📌 Sugerencia extra para alias útil:

Si usás seguido esa carpeta, podrías agregar este alias a tu .bashrc:

alias cdapr='cd /c/Users/Mauricio/miProyectos/aprendizaje'

Después solo escribís cdapr y listo.    
