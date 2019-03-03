//
//  main.c
//  VTV3004-4
//
//  Created by Chel Long on 2/28/19.
//  Copyright © 2019 Chel Long. All rights reserved.
//

#include <stdio.h>
int UCLN (int a, int b) {
    if(b==0) return a;
    return UCLN(b, a%b);
}
int main(int argc, const char * argv[]) {
    // insert code here...
    int tc;
    scanf("%d", &tc);
    int number1, number2;
    for (int i=0; i<tc; i++) {
        scanf("%d%d", &number1, &number2);
        printf("%d\n", UCLN(number1, number2));
    }
    
    return 0;
}
