# Exam Rank 02, por patrones

Si estás preparando el Exam Rank 02, seguramente tengas delante una lista de 56 ejercicios y la sensación de que hay que memorizarlos todos. No hace falta.

Cuando los rehagas uno detrás de otro, pasa algo curioso: empiezas a escribir el mismo `main` una y otra vez. Cambia lo que hay dentro del bucle, pero el esqueleto es casi siempre el mismo. Este repo nace de ahí. En vez de ordenar los ejercicios por nivel, los ordena por **patrón**, para que al leer un enunciado lo primero que pienses sea "esto es un tipo-1" y la mitad del ejercicio ya esté escrita en tu cabeza.

## Los tres tipos

La mayoría de los programas del examen caen en uno de estos tres moldes. Van de más fácil a más difícil, y conviene aprenderlos en ese orden.

### Tipo 1: un argumento

El más común y el primero que deberías dominar. Te dan una cadena, la recorres y escribes algo.

```c
#include <unistd.h>

void	hacer_algo(chra *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		// CONDICION

		write(1, &s[i], 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		hacer_algo(av[1]);
	write(1, "\n", 1);
	return (0);
}
```

Fíjate en el detalle que más puntos cuesta: el `\n` se escribe **siempre**, haya argumento o no. Una vez tienes esto, `first_word`, `rot_13`, `ulstr` o `rev_wstr` son la misma cosa con distinto relleno.

Ejercicios: `first_word`, `fizzbuzz`, `repeat_alpha`, `rev_print`, `rot_13`, `rotone`, `search_and_replace`, `ulstr`, `alpha_mirror`, `camel_to_snake`, `last_word`, `snake_to_camel`, `epur_str`, `expand_str`, `rev_wstr`, `rostring`.

### Tipo 2: dos cadenas

Ahora son dos argumentos y casi siempre toca comparar uno con otro: qué letras comparten, si una está escondida dentro de la otra...

```c
int	main(int ac, char **av)
{
	if (ac == 3)
		hacer_algo(av[1], av[2]);
	write(1, "\n", 1);
	return (0);
}
```

El `main` es igual que antes. Lo difícil está dentro: un bucle por cada cadena y, en `inter` y `union`, controlar que no se repitan letras. Si te sale `inter`, `union` es un paso más.

Ejercicios: `inter`, `union`, `wdmatch`, `hidenp`.

### Tipo 3: varios argumentos

Llega en el nivel 3. Ya no sabes cuántos argumentos habrá, así que el bucle recorre `av` entero.

```c
int	main(int ac, char **av)
{
	int	i;

	if (ac == 1)
		write(1, "\n", 1);
	i = 1;
	while (i < ac)
	{
		hacer_algo(av[i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
```

La trampa típica aquí es el salto de línea: uno **por argumento**, no uno al final.

Ejercicios: `paramsum`, `str_capitalizer`, `rstr_capitalizer`.

## Y el resto

Lo que no encaja en los tres tipos se agrupa por tema:

- **ft**: te piden una función, no un programa. Nada de `main`; lo que importa es el valor que devuelves. Aquí están `ft_strcmp`, `ft_atoi`, `ft_split`, `ft_itoa`...
- **bits**: `print_bits`, `reverse_bits` y `swap_bits`. Asustan más de lo que son; con entender `(x >> i) & 1` tienes la mitad hecha.
- **numericos**: primos, máximo común divisor, hexadecimal. Matemáticas sencillas con `%` y `/`.
- **listas**: recorrer y modificar una `t_list`. Aquí está la duda de siempre: cuándo hace falta `**` y cuándo basta con `*`.

## Cómo está organizado

Primero el patrón y, dentro, el nivel:

```
tipo-1/
├── level-1/
│   └── first_word/
│       ├── README.md       el enunciado
│       └── first_word.c    una solución
├── level-2/
└── ...
```

Así puedes coger un patrón y subir de nivel sin cambiar de carpeta. Notas cómo el mismo esqueleto aguanta ejercicios cada vez más largos.

## Una forma de usarlo

1. Escoge un tipo. Empieza por `tipo-1`.
2. Haz el primer ejercicio del nivel 1 mirando la solución si hace falta. El objetivo es quedarte con el esqueleto.
3. Haz los demás de ese tipo **sin mirar**. Ya tienes el `main`; solo te falta pensar el centro del bucle.
4. Sube de nivel dentro del mismo tipo.
5. Cuando todo te suene, simula el examen.

```bash
./exam.sh             # un ejercicio cualquiera
./exam.sh 2           # uno del nivel 2
./exam.sh 3 tipo-3    # uno del nivel 3, tipo 3
```

El script te enseña el enunciado y te crea `practica/<ejercicio>/` para que lo escribas ahí. Esa carpeta no se sube al repo.

Un último consejo: cuando falles uno, apunta **por qué** fallaste. Casi siempre es lo mismo: leer `s[-1]`, olvidar el `\n` o salirse de la cadena. Esa lista corta vale más que releer soluciones.

## Créditos

Los enunciados vienen de [alexhiguera/Exam_Rank_02_42_School](https://github.com/alexhiguera/Exam_Rank_02_42_School), con licencia MIT:

> Copyright (c) 2026 Alex Higuera

La organización por patrones y las soluciones son de difortez. Si encuentras un fallo o tienes una solución más clara, abre un issue.
