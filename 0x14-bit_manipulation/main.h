#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#define BITS 8

unsigned int binary_to_uint(const char *b);
unsigned int _strlen(const char *str);
void print_binary(unsigned long int n);
int _putchar(char c);
unsigned long int _power(int x, int y);
int _pow(int x, int y);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);


#endif /* MAIN_H */
