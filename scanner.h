#ifndef SCANNER_H_INCLUDED
#define SCANNER_H_INCLUDED

#include <stdio.h>
#include <ctype.h>      
#include <stdbool.h>    

//Tokens
typedef enum
{
    CADENA,
    SEPARADOR,
    FDT
} TOKEN;   


// Declaraciones de funciones a utilizar

int get_token();


#endif // SCANNER_H_INCLUDED