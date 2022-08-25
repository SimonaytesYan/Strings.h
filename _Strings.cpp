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
    to[n] = '\0';
}

void _strcap(char *to, char *from) {

	int n_to = _strlen(to);
    int i = 0;
    while (from[i] != '\0')
    {    
		to[n_to + i] = from[i];
        i++;
	}
    to[n_to + i] = '\0';
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

int _strnlen(char *str, int maxLen) 
{
    int n = 0;
    while (str[n] != '\0' && maxLen <= n)
        n++;
    return n;
}

void _strncpy(char *to, char* from, int maxLen) 
{
    int n = 0;
    while (from[n] != '\0' && n < maxLen) 
    {
        to[n] = from[n];
        n++;
    }
    to[n] = '\0';
}

void _strncat(char *to, char *from, int maxLen) 
{
    int len_to = _strlen(to);
    if (maxLen < len_to) 
    {
        to[maxLen] = '\0';
        return;
    }
    int n = 0;
    while (from[n] != '\0' && len_to + n < maxLen)
    {
        to[len_to + n] = from[n];
        n++;
    }
    to[len_to + n] = '\0';
}

char *_strnchr(char *str, char c, int maxLen) 
{
    int i = 0;
    char* answer;
    while (i < maxLen && str[i] != '\0')
    {
        if (str[i] == c)
            return (str + i);
        i++;
    }    
    return nullptr;
}