#ifndef _STRINGS_SYM_
#define _STRINGS_SYM_

int _strlen(char *str);

void _strcpy(char *to, char* from);

void _strcap(char *to, char *from);

char *_strchr(char * str, char c);

int _strnlen(char *str, int maxLen);

void _strncpy(char *to, char* from, int maxLen);

void _strncat(char *to, char* from, int maxLen);

char *_strnchr(char * str, char c, int maxLen);


#endif