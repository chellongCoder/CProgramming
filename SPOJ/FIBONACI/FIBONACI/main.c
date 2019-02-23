//
//  main.c
//  FIBONACI
//
//  Created by Chel Long on 2/23/19.
//  Copyright © 2019 Chel Long. All rights reserved.
//

#include <stdio.h>
int fibonacci(int n)  {
    if(n == 0)
        return 0;
    else if(n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}
int main(int argc, const char * argv[]) {
    // insert code here...
    int n;
    scanf("%d", &n);
    for (int i=1; i<=n; i++) {
        printf("%d\n", fibonacci(i));
    }
    return 0;
}
