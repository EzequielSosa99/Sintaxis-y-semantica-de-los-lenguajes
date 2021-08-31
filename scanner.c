#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>
#include <scanner.h>

int get_token(char *buffer)
{
    char c;
    int index=0;

    while((c = getchar[] != FDT))
    {
        if (c == ',')
        {
            if(index)
            {
                ungetc(c, stdin);
                return CADENA;
            }
            continue;
            return SEPARADOR;
        }

        else if(isspace(c))
        {
            if(index)
            {
                return CADENA;
            }
            
            buffer[0]=c;
            buffer[1]='\0';
        }

        else
        {
            buffer[index++]=c;
        }
    }

    return FDT;
}