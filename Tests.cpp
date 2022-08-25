#include <stdio.h>
#include <stdlib.h>
#include "Tests.h"
#include "_Strings.h"

void test_strcpy() 
{
    char *f = (char*)calloc(5, sizeof(char));
    char *s = (char*)calloc(6, sizeof(char));

    printf("Start program\n");

    _strcpy(f,(char*) "lol");
    _strcpy(s,(char*) "second");

    printf("f = %s\n", f);
    printf("s = %s\n", s);

    _strcpy(f,s);
    printf("f = %s\n", f);
    printf("s = %s", s);

    free(f);
    free(s);
}

void test_strcat()
{
    char *f = (char*)calloc(5, sizeof(char));
    char *s = (char*)calloc(20, sizeof(char));
    _strcpy(f, (char*)"I`m");
    _strcpy(s, (char*)" the best programer");

    printf("f = %s\n", f);
    printf("s = %s\n", s);

    _strcap(f, s);

    printf("f = %s\n", f);
    printf("s = %s\n", s);

    free(f);
    free(s);
}

void test_strchr()
{
    char *f = (char*)calloc(10, sizeof(char));

    _strcpy(f, (char *)"haaaaaaah");
    printf("f = %s\n", f);

    char *to_h = _strchr(f, 'h');

    printf("%s\n", to_h);

    _strcpy(f, (char *)"aaa");
    printf("f = %s\n", f);

    printf("%s\n", _strchr(f, 'h'));

    free(f);
}