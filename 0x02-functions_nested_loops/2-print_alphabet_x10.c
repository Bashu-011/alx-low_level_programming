#include "main.h"
/**
*print_alphabet_x10 - prints the alphabet ten times
**/
void print_alphabet_x10(void)
{
int i;
char letter;
i = 0;
while (i < 10)
{
letter = 'a';
while (letter <= 'z')
{
_putchar(letter);
letter++;
}
_putchar('\n');
i++;
}
}
