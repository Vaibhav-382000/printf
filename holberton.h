#ifndef HOLBERTON_H
#define HOLBERTON_H


#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>


/* Macros */
#define _BUFFER_ 1024

/**
 *struct specifiers - name of printf
 *@sp: pointer
 *@f: pointer to the function
 *sp_t - is the alias
 */

typedef struct specifiers
{
	char sp;
	/*int (*f)(va_list arg, char * buffer, int count);*/
	int (*f)(va_list arg);
} sp_t;

/**
 * struct buffer - struct for memory operations
 * @buffer: the buffer
 * @index: position
 * @size: buffer size
 */
typedef struct buffer
{
	char *buffer;
	char *index;
	int size;
} buffer_t;

int _printf(const char *format, ...);

/*
 * Functions specifiers
 *int (*get_sp_func(char s))(va_list arg, char * buffer, int count);
 *int sp_c(va_list arg, char * buffer, int count);
 *int sp_s(va_list arg, char * buffer, int count);
 *int sp_d(va_list arg, char * buffer, int count);
 *int sp_i(va_list arg, char * buffer, int count);
 *int sp_b(va_list arg, char * buffer, int count);
 *int sp_u(va_list arg, char * buffer, int count);
 *int sp_o(va_list arg, char * buffer, int count);
 *int sp_x(va_list arg, char * buffer, int count);
 *int sp_X(va_list arg, char * buffer, int count);
 *int sp_S(va_list arg, char * buffer, int count);
 *int sp_p(va_list arg, char * buffer, int count);
 *int sp_r(va_list arg, char * buffer, int count);
 *int sp_R(va_list arg, char * buffer, int count);
 *int sp_a(va_list arg, char * buffer, int count);
 *int sp_pc(va_list arg, char * buffer, int count);
 */

int sp_c(va_list arg);
int sp_s(va_list arg);
int sp_d(va_list arg);
int sp_i(va_list arg);
int sp_b(va_list arg);
int sp_u(va_list arg);
int sp_o(va_list arg);
int sp_x(va_list arg);
int sp_X(va_list arg);
int sp_S(va_list arg);
int sp_p(va_list arg);
int sp_r(va_list arg);
int sp_R(va_list arg);
int sp_a(va_list arg);
int sp_pc(va_list arg);



/* Aux Functions */
buffer_t *_buffer(void);
int get_specifier(va_list arg, sp_t sps[], const char *format);
int aux_u(unsigned int n);

#endif /* HOLBERTON_H */
