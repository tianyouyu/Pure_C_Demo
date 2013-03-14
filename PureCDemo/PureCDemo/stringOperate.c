//
//  stringOperate.c
//  PureCDemo
//
//  Created by mato on 13-3-14.
//  Copyright (c) 2013年 mato. All rights reserved.
//

#include <stdio.h>
#include "stringOperate.h"
#define TRUE 1
#define FALSE 0

void hello()
{
    printf("hello!");
}


size_t cal_strlen(char *str)
{
    size_t len = 0;
    while (str != NULL && *str++ != '\0')
    {
        len++;
    }
    return len;
}

int find_char(char **strs, char c)
{
    char *str;
    while ((str = *strs++) != NULL)
    {
        while (*str != '\0')
        {
            if (*str++ == c )
            {
                return TRUE;
            }
        }
    }
    return FALSE;
}

char * find_chars(char const *source, char const *chars)
{
    char *sp = (char *)source;
    while (*sp++ != '\0')
    {
        char *cp = (char *)chars;
        while (*cp != '\0')
        {
            if (*cp == *sp)
            {
                return sp;
            }
            cp++;
        }
    }
    return NULL;
}

int del_substr(char *str, const char *substr)
{
    if (str == NULL || substr == NULL)
    {
        return 0;
    }
    char *sp = str;
    while (*sp != '\0')
    {
        char *ep = sp;
        int i = 0;
        while (*(substr + i) != '\0' && *ep == *(substr + i))
        {
            ep++;
            i++;
        }
        if (*(substr + i) == '\0')
        {
            while (*ep != '\0')
            {
                *sp++ = *ep++;
            }
            *sp = '\0';
            return 1;
        }
        sp++;
    }
    return 0;
}

void reverse_str(char *str)
{
    if (str == NULL)
    {
        return;
    }
    //sp指向字符开始处
    char *sp = str;
    //ep指向字符结束处
    char *ep = str;
    int len = 0;
    while (*ep++ != '\0')
    {
        len++;
    }
    ep--;
    int c = len / 2;
    while (c > 0)
    {
        char tmp = *sp;
        *sp++ = *--ep;
        *ep = tmp;
        c--;
    }
}



