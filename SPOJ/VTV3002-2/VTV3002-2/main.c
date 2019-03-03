//
//  main.c
//  TAALG008
//
//  Created by Chel Long on 2/23/19.
//  Copyright © 2019 Chel Long. All rights reserved.
//

#include <stdio.h>
unsigned long checkMax (unsigned long number, int curr_max) {
    if(number==0) return curr_max;
    if (number%10 > curr_max) {
        return checkMax(number/10, number%10);
    }
    return checkMax(number/10, curr_max);
}
int main(int argc, const char * argv[]) {
    // insert code here...
    int tc;
    unsigned long n;
    scanf("%d", &tc);
    for (int i=0; i<tc; i++) {
        scanf("%ld", &n);
        printf("%10ld: %ld\n", n, checkMax(n, 0));
    }
    
    
    return 0;
}
