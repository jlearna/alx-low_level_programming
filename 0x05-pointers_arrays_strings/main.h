#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>

/**
 * reset_to_98 - takes a pointer to an int as parameter and updates the value it points to to 98
 * @n: input
 * Return: nothing
 */
void reset_to_98(int *n);

/**
 * swap_int - swaps the values of two integers
 * @a: first int
 * @b: second int
 * Return: nothing
 */
void swap_int(int *a, int *b);
void reset_to_98(int *n);
void _puts(char *str);
void print_rev(char *s);
void rev_string(char *s);
void swap_int(int *a, int *b);
void swap_char(char *a, char *b);
void puts2(char *str);
void puts_half(char *str);
void print_array(int *a, int n);
char *_strcpy(char *dest, char *src);
int _putchar(char c);
int _strlen(char *s);
int _atoi(char *s);
#endif /*MAIN_H*/
