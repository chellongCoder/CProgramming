//
//  main.c
//  TAALG012_TinhGiaTriHam
//
//  Created by Chel Long on 2/23/19.
//  Copyright © 2019 Chel Long. All rights reserved.
//

#include <stdio.h>
#include <math.h>
double tinhGiaTri(int n) {
    if(n==1) return 1;
    return sqrt(n+sqrt(tinhGiaTri(n-1)));
}
int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    printf("%f", tinhGiaTri(17));
    return 0;
}
