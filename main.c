#include <stdio.h>
#include <stdlib.h>
#include "monty.h"

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        fprintf(stderr, "USAGE: monty file\n");
        return EXIT_FAILURE;
    }

    char *filename = argv[1];
    FILE *file = fopen(filename, "r");

    if (file == NULL)
    {
        fprintf(stderr, "Error: Can't open file %s\n", filename);
        return EXIT_FAILURE;
    }

    stack_t *stack = NULL;
    fclose(file);
    return EXIT_SUCCESS;
}
