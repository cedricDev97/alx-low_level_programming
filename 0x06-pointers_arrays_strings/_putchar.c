/**
 * _putchar- write the character c toto stdout
 * @c: the character to print
 *
 * Return: On succes 1.
 * on error, -1 is returned, and errorisset
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
