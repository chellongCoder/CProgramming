//
//  main.c
//  VTV3008-8
//
//  Created by Chel Long on 2/28/19.
//  Copyright © 2019 Chel Long. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int tinhTongChan(unsigned int *f, int length, int sum) {
    if(length==0) return sum;
    return f[length-1]%2==0 ? tinhTongChan(f, length-1, (sum+f[length-1])) : tinhTongChan(f, length-1, sum);
}
int main(int argc, const char * argv[]) {
    // insert code here...
    unsigned int *f;
    int length;
    scanf("%d", &length);
    f = (unsigned int*)malloc(length * sizeof(unsigned int));
    for (int i=0; i<length; i++) {
        scanf("%d", &f[i]);
    }
    printf("%d\n" , tinhTongChan(f, length, 0));
    free(f);
    return 0;
}
