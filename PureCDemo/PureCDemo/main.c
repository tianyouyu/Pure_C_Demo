//
//  main.c
//  PureCDemo
//
//  Created by mato on 13-3-12.
//  Copyright (c) 2013年 mato. All rights reserved.
//

#include <stdio.h>
#include "stringOperate.h"
int main(int argc, const char * argv[])
{
    char str[] = "aabcbc";
    printf("str=%s\n", str);
    // 删除一个字符串当中的第一个符合要求的子串
    //    del_substr(str, "abc");
    //    printf("after del_substr(str, \"abc\"),str=%s\n", str);
    
    reverse_str(str);
    printf("after reverse_str(str),str=%s\n", str);
}

