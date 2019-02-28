//
//  main.c
//  VTV3010
//
//  Created by Chel Long on 2/24/19.
//  Copyright © 2019 Chel Long. All rights reserved.
//

#include <stdio.h>
#include <math.h>

double tongN(double x, int n) {
    if(n==1) return x;
    else {
        return x/n * tongN(x, n-1);
    }
}
double tongS(double x, int n) {
    if(n==1) return x;
    return tongN(x, n) + tongS(x, n-1);
 }

int main(int argc, const char * argv[]) {
    // insert code here...
    int tc;
    int n;
    double x;
    scanf("%d", &tc);
    for (int i=0; i<tc; i++) {
        scanf("%lf %d", &x, &n);
//        scanf("%d", &n);
        printf("%.8f\n", tongS(x, n));
    }
    
    return 0;
}
