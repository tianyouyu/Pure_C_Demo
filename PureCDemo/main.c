//
//  main.c
//  PureCDemo
//
//  Created by mato on 13-3-12.
//  Copyright (c) 2013年 mato. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "stringOperate.h"
#include "numberOperation.h"
#define SIZE 1000
int main(int argc, const char * argv[])
{
//    char str[] = "aabcbc";
//    printf("str=%s\n", str);
    // 删除一个字符串当中的第一个符合要求的子串
//        del_substr(str, "abc");
//        printf("after del_substr(str, \"abc\"),str=%s\n", str);
    
//    reverse_str(str);
//    printf("after reverse_str(str),str=%s\n", str);
    char *result =(char *)malloc(SIZE * sizeof(char));
    memset(result, 1, SIZE * sizeof(char));
//    for (int i = 0; i < SIZE; i++)
//    {
//        printf("%i", *(result + i));
//    }
    
    find_all_prime(result, SIZE);
    print_prime(result, SIZE);
}

