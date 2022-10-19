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
/**
 * _abs - computes the absolute value of an integer
 * @int: value to compute
 * Return: int
 */
int _abs(int);
/**
 * print_last_last - prints digit last
 *
 * @int: integer to input
 * Return: last digit of integer
 */
int print_last_digit(int);
/**
 * jack_bauer - jack bauer gooo
 *
 */
void jack_bauer(void);
/**
 * times_table - times this up
 *
 *
 */
void times_table(void);
/**
 * add - adds stuff up
 *
 * @int: integers to add
 * Return: returns a sum
 */
int add(int, int);
/**
 * print_to_98 - prints to 98
 * @n: integer to start at
 *
 */
void print_to_98(int n);
#endif
