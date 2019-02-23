//
//  main.c
//  TAALG011_NhiPhan
//
//  Created by Chel Long on 2/23/19.
//  Copyright © 2019 Chel Long. All rights reserved.
//

#include <stdio.h>

void nhi_phan(int n) {
    if (n==0) {
        return;
    }
    nhi_phan(n/2);
    printf("%d", n%2);
}
int main(int argc, const char * argv[]) {
    // insert code here...
    int n;
    int tc;
    scanf("%d", &tc);
    for (int i=0; i<tc; i++) {
        scanf("%d", &n);
        nhi_phan(n);
        printf("\n");
    }
    
    
    return 0;
}
