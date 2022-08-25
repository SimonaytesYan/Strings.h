#include "_Strings.h"

int _strlen(char *str) 
{
    int n = 0;
    while (str[n] != '\0')
        n++;
    return n;
}

void _strcpy(char *to, char* from) {
    int n = 0;
    while (from[n] != '\0')
    {
        to[n] = from[n];
        n++;
    }    
}

void _strcap(char *to, char *from) {

	int n_to = _strlen(to);
    int i = 0;
    while (from[i] != '\0')
    {    
		to[n_to + i] = from[i];
        i++;
	}
}

char * _strchr(char * str, char c) 
{
    int i = 0;
    char * answer = nullptr;

    while (str[i] != '\0')
    {
        if (str[i] == c)
            return (str + i);
        i++;
    }
    return nullptr;
}