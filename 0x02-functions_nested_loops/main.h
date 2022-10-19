#ifndef _MAIN_H_
#define _MAIN_H_
/**
 * _putchar -writes the character c to std
 * @c: parameter to compare
 * Return: 1 or 0
 */
int _putchar(char c);
/**
 * print_alphabet - function to print alphabet
 */
void print_alphabet(void);
/**
 * print_alphabet_x10 - function that prints 10 times the alphabet, in lowercase
 */
void print_alphabet_x10(void);
/**
 * _islower - checks for lowercase character
 * @c: chacter to compare
 * Return: 1 or 0
 */
int _islower(int c);
/**
 * _isalpha - checks for alphabetic character
 * @c: input
 * Return: 1 or 0
 */
int _isalpha(int c);
/**
 * print_sign - prints the sign of a number
 * @n: - input
 * Return: 0 or 1nor -1
 */
int print_sign(int n);
#endif
