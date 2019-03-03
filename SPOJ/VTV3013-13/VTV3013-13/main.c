//
//  main.c
//  VTV3013-13
//
//  Created by Chel Long on 2/28/19.
//  Copyright © 2019 Chel Long. All rights reserved.
//

#include <stdio.h>
double tongN (int n) {
    if(n==0) return 0;
    return (double)1/(n*(n+1)) + (double)(n-1)/n;
}
double tongS (int n) {
    if(n==0) return 0;
    return  tongN(n) + tongS(n-1);
}
int main(int argc, const char * argv[]) {
    // insert code here...
    int tc;
    scanf("%d", &tc);
    int n;
    for (int i=0; i<tc; i++) {
        scanf("%d", &n);
        printf("%.10f\n", tongS(n));
    }
    return 0;
}
