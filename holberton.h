#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdlib.h>
#include <stdarg.h>

/* Macros */

/**
 * struct - 
 */
typedef struct hee 
{
	char *c;
	char *(*sp)(va_list, char *);

}hee;

int _printf(const char *format, ...);



/* Functions  Specifiers*/

/* Flags handlers */

/* Aux Functions */
int _atoi(char *s);


#endif /* HOLBERTON_H */
