//
//  main.c
//  VTV3003-3
//
//  Created by Chel Long on 2/28/19.
//  Copyright © 2019 Chel Long. All rights reserved.
//

#include <stdio.h>
int countMax (unsigned long number, int curr_max, int count) {
    if(number==0) {
        return count;
    }
    if (number%10 > curr_max) {
        return countMax(number/10, number%10, 1);
    }
    else if (number%10 == curr_max) {
        return countMax(number/10, number%10, count+1);
    }
    return countMax(number/10, curr_max, count);
}
int main(int argc, const char * argv[]) {
    // insert code here...
    unsigned long number;
    int tc;
    scanf("%d", &tc);
    for (int i=0; i<tc; i++) {
        scanf("%lu", &number);
        printf("%lu: %d\n", number, countMax(number, 0, 0));

    }
    return 0;
}
