#ifndef _STRTYPE_H_
#define _STRTYPE_H_

#include <stdio.h>
#include <string.h>
#include <errno.h>

#define MAX_STRING_LENGHT 1024//Max size for strings
#define DEFAULT_STRING_LENGHT 256//Default size for strings


#ifndef _FUNC
#define _FUNC(N,P) N P /*N - Name, P - Prototype*/
#endif

int _FUNC(getstring, (char * , int));
int _FUNC(fgetstring, (FILE *, char *, int));


#endif/*_STRTYPE_H_*/
