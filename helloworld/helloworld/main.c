//
//  main.c
//  helloworld
//
//  Created by Scott Alwine on 2/13/14.
//  Copyright (c) 2014 Scott Alwine. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{

    int i;
    double factorial = 1;
    
    for (i=1; i<=65; i++)
    {
        factorial *= i;
        printf("%d! = %0.0f\n", i, factorial);
    }
    // printf("10! is %d.\n", factorial);
    
    // insert code here...
    // printf("Hello, World!\n");
    
    if(factorial == 3628800)
    {
        return 0;
    }
    else
    {
        return 1;
    }
    // return 0;
}

