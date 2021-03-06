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
    if(n==1) return sqrt(n);
    return sqrt(n+tinhGiaTri(n-1));
}
int main(int argc, const char * argv[]) {
    // insert code here...
    int tc;
    int n;
    scanf("%d", &tc);
    for (int i=0; i<tc; i++) {
        scanf("%d", &n);
        printf("%0.10f\n", tinhGiaTri(n));
    }
    
    return 0;
}
