//
//  stringOperate.h
//  PureCDemo
//
//  Created by mato on 13-3-14.
//  Copyright (c) 2013年 mato. All rights reserved.
//

#ifndef PureCDemo_stringOperate_h
#define PureCDemo_stringOperate_h

size_t cal_strlen(char *str);

/*
 description:查找字符数组中是否包含指定的字符
 */
int find_char(char **strs, char c);

/*
 description:查找一个字符串当中的第一个出现在另一个字符串当中的字符
 
 params: source 原字符串
 chars 子串
 
 return: NULL 没有找到符合要求的子串
 
 */
char * find_chars(char const *source, char const *chars);

/*
 description:删除一个字符串当中的第一个符合要求的子串
 要求传进来的第一个字符串可修改，且已'\0'结尾
 
 params: str 原字符串
 substr 子串
 
 return: 0 没有找到符合要求的子串
 1 找到并直接在原字符串中删除此子串
 */
int del_substr(char *str, const char *substr);

/*
 description:反向字符串
 要求此字符串可修改,且以'\0'结尾
 */
void reverse_str(char *str);


#endif
