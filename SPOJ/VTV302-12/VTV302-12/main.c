//
//  main.c
//  VTV302-12
//
//  Created by Chel Long on 2/28/19.
//  Copyright © 2019 Chel Long. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
int kiemTraMangAm(float* f, int length) {
    if(length==0) return 1;
    if(f[length-1] >= 0) return 0;
    else return kiemTraMangAm(f, length-1);
}
int main(int argc, const char * argv[]) {
    // insert code here...
    int length;
    float *f;
    int tc;
    scanf("%d", &tc);
    for (int i=0; i<tc; i++) {
        scanf("%d", &length);
        f = (float*)malloc(length*sizeof(float));
        for (int j=0; j<length; j++) {
            scanf("%f",&f[j]);
        }
        kiemTraMangAm(f, length) ? printf("Yes\n") : printf("No\n");
        free(f);
    }
    return 0;
}
