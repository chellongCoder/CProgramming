//
//  main.c
//  VTV3009-9
//
//  Created by Chel Long on 2/28/19.
//  Copyright © 2019 Chel Long. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
int demPhanTuDuong(float *f, int length, int count) {
    if(length==0) return count;
    if(f[length-1] > 0) count ++;
    return demPhanTuDuong(f, length-1, count);
}
int main(int argc, const char * argv[]) {
    // insert code here...
//    float f[] = {80.703, 56.067, 47.287, 0.184, 39.208, -90.160, 5.224, -97.048, 57.922, -61.753};
    float *f;
    int length;
    scanf("%d", &length);
    f = (float*)malloc(length * sizeof(float));
    for (int i=0; i<length; i++) {
        scanf("%f", &f[i]);
    }
    printf("%d\n",demPhanTuDuong(f, length, 0));
    free(f);
    return 0;
}
