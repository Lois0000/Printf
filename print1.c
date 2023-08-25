#include "_printf.c"

/**
 * print_buffer - Prints the contents of the buffer if it actually exist
 * @buffer: Array of characters
 * @buff_ind: Index at which to add next charavters and it represents the length
 */

void print_buffer(char buffer[], int *buff_ind)
{
        if (*buff_ind > 0)
                write(1, &buffer[0], *buff_ind);

        *buff_ind = 0;
}
