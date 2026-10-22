#include <stdlib.h>
#include <stdio.h>

char    *ft_strncpy(char *dest, char *src, int n)
{
    int i;

    i = 0;
    while (src[i] && i < n)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

int count_w(char *s)
{
    int i, cont = 0;

    i = 0;
    while (s[i])
    {
        while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
            i++;
        if (s[i])
        {
            cont++;
            while (s[i] && !(s[i] == ' ' || s[i] == '\t' || s[i] == '\n'))
                i++;
        }
    }
    return (cont);
}

char    **ft_split(char *str)
{
    int i, j, k;
    int w_cont;
    char **words;

    w_cont = count_w(str);

    words = (char **)malloc(sizeof(char *) * (w_cont + 1));
    if (!words)
        return (0);
    words[w_cont] = 0;

    i = 0;
    k = 0;
    while (str[i] && k < w_cont)
    {
        while (str[i] == ' ' || str[i] == '\t'|| '\n')
            i++;

        j = i;
        while (str[i] && !(str[i] == ' ' || str[i] == '\t' || '\n'))
            i++;
        
        if (i > j)
        {
            words[k] = (char *)malloc(sizeof(char) * (i - j + 1));
            if (!words[k])
                return (0);
            
            ft_strncpy(words[k], &str[j], i - j);
            k++;
        }
    }
    return (words);
}

int main(void)
{
    char **words = ft_split("PATATAS CON SALCHICHAS AHUMADAS DE RENO");

    int i = 0;
    while (words[i])
    {
        printf("%p - %c - %s\n", &words[i], *words[i], words[i]);
        i++;
    }
    return (0);
}