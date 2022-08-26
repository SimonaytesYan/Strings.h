#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <cstring>
#include "Tests.h"
#include "_Strings.h"

void test_strlen()
{
    char f[] = "123456789";
    printf("\"%s\" size = %d\n",f, _strlen(f));

    printf("\"\" size = %d\n", _strlen((char*)""));

    printf("\"1\" size = %d\n", _strlen((char*)"1"));

    printf("\"11\" size = %d\n", _strlen((char*)"11"));

    printf("\"111\" size = %d\n", _strlen((char*)"111"));
}

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

    _strcat(f, s);

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

void test_strnlen()
{
    char f[] = "123456789";

    for(int i = 10; i >= 0; i--) {
        printf("_strnlen(\"123456789\", %d) = %d\n", i, _strnlen((char*)"123456789", i));
    }

    for (int i = 2; i >= 0; i--) {
        printf("_strnlen(\"1\", %d) = %d\n",         i, _strnlen((char*)"1",         i));
    }

    for (int i = 1; i >= 0; i--) {
        printf("_strnlen(\"\", %d) = %d\n",          i, _strnlen((char*)"",          i));
    }
}

void test_strncpy()
{
    char f[] = "To be ";
    char s[] = "or not to be";
    
    char res[40];
   
    for(int i = 10; i >= 0; i-- )
    {
        _strncpy(res, f, i);
        printf("_strncpy(res, \"%s\", %d) = \"%s\"\n", f, i, res);
    }

    for (int i = 20; i >= 5; i--)
    {
        _strncpy(res, s, i);
        printf("_strncpy(res, \"%s\", %d) = \"%s\"\n", s, i, res);
    }

    for (int i = 10; i >= 0; i--)
    {
        _strncpy(res, (char*)"", i);
        printf("_strncpy(res, \"\", %d) = \"%s\"\n", i, res);
    }
}

void test_strncat()
{
    char f[40] = "To be ";
    char s[] = "or not to be";
    for(int i = 25; i >= 0; i--)
    {
        _strncat(f, s, i);
        printf("_strncat(\"%s\", \"%s\", %d) = \"%s\"\n", "To be ", s, i, f);
        _strcpy(f, (char*)"To be ");
    }
}

void test_strnchr()
{
    char f[40] = "hello my dear friend!";

    for (char c = 'a'; c <= 'z'; c++)
    {
        for (int i = 25; i >= 0; i--)
        {
            printf("_strnchr(\"%s\", %c, %d) = \"%s\"\n", f, c, i, _strnchr(f, c, i));
            printf(" strnchr(\"%s\", %c, %d) = \"%s\"\n", f, c, i, memchr(f, c, i));
        }
    }
}