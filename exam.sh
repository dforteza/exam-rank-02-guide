#!/bin/bash
# Saca un ejercicio al azar, como en el examen.
# Uso: ./exam.sh [nivel] [tipo]   (sin argumentos: cualquiera)

cd "$(dirname "$0")" || exit 1

LEVEL=${1:-*}
TYPE=${2:-*}
EX=$(ls -d $TYPE/level-$LEVEL/*/ 2>/dev/null | shuf -n 1)
if [ -z "$EX" ]; then
	echo "Uso: ./exam.sh [1-4] [tipo-1|tipo-2|tipo-3|ft|bits|numericos|listas]"
	exit 1
fi

NAME=$(basename "$EX")
WORK="practica/$NAME"
mkdir -p "$WORK"

echo "Te ha tocado: $NAME  ($EX)"
echo
sed '1d' "$EX/README.md"
echo
echo "Escríbelo en $WORK/ sin mirar la solución."
echo "Cuando acabes, compara con $EX"
