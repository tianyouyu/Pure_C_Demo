//
//  numberOperation.c
//  PureCDemo
//
//  Created by mato on 13-3-14.
//  Copyright (c) 2013年 mato. All rights reserved.
//

#include <stdio.h>
#define TRUE 1
#define FALSE 0
/*
 description:找出0到一个数之间所有的质数，并存在一个数组里，下标代表这个数，值代表是否是质数，要求传进来的数组初始值为1
 params: result 要存储的数组
         length 要找的数
 */
void find_all_prime(char *result, long length)
{
    long i = 2;
    //0 和 1不是质数
    *(result) = FALSE;
    *(result+1) = FALSE;
    while (i <= length)
    {
        //如果当前i不是质数，直接跳过
        if (*(result + i) == FALSE)
        {
            i++;
            continue;
        }
        
        //如果当前i是质数，则剔除可以整除i在length范围内的所有数
        for (long j = 2; i * j <= length; j++)
        {
            *(result + i * j) = FALSE;
        }
        i++;
    }
}

void print_prime(char *result, long length)
{
    long j = 0;
    for (long i = 0; i < length; i++)
    {
        if (*(result + i) == TRUE)
        {
            j++;
            printf("%lu ", i);
            //输出10个换一行
            if (j % 10 == 0)
            {
                printf("\n");
            }
        }
    }
    printf("\ntotal prime count = %lu", j);
}
