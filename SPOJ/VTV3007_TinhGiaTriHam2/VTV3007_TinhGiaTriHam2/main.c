//
//  main.c
//  VTV3007_TinhGiaTriHam2
//
//  Created by Chel Long on 2/24/19.
//  Copyright © 2019 Chel Long. All rights reserved.
//

#include <stdio.h>
#include <math.h>
double tinhGiaTri(int n, int count) {
    if(count==n) return sqrt(n);
    return sqrt(count+tinhGiaTri(n, count+1));
}
int main(int argc, const char * argv[]) {
    // insert code here...
    int tc;
    int n;
    scanf("%d", &tc);
    for (int i=0; i<tc; i++) {
        scanf("%d", &n);
        printf("%.10f\n", tinhGiaTri(n, 1));
    }
    
    return 0;
}


