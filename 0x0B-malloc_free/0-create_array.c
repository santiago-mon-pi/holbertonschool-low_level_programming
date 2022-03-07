#include <stdlib.h>
#include "main.h"

/**
 * create_array - create array using malloc
 * @size: size of array
 * @c: character
 *
 * Return: *pointer to array, null if size 0
 */

char *create_array(unsigned int size, char c)

{
        char *str;
        unsigned int i;

        str = malloc(sizeof(char) * size);

        if (size == 0 || str == NULL)
                return (NULL);

        for (i = 0; i < size; i++)
                str[i] = c;
        return (str);
}
