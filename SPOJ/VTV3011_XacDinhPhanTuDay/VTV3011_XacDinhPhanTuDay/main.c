//
//  main.c
//  VTV3011_XacDinhPhanTuDay
//
//  Created by Chel Long on 2/24/19.
//  Copyright © 2019 Chel Long. All rights reserved.
//
//Sử dụng đệ quy để xác định giá trị phần tử thứ n của hai dãy sau:
//
//X(0) = 1
//Y(0) = 0
//X(n) = X(n-1) + Y(n-1)
//Y(n) = 3*X(n-1) + Y(n-1)
//
//Input
//Dòng 1: t - số lượng testcase
//t dòng tiếp theo: mỗi dòng là một sô nguyên không âm n.
//
//Output
//Với mỗi testcase, in ra trên một dòng hai số nguyên lần lượt là giá trị của X(n) và Y(n)
//Input:
//5
//1
//5
//17
//1
//8
//
//Output:
//1 3
//76 132
//13160704 22795008
//1 3
//1552 2688
#include <stdio.h>

int X(int n);
int Y(int n);

int Y(int n) {
    if(n==0) return 0;
    return 3*X(n-1) + Y(n-1);
    
}

int X(int n) {
    if(n==0) return 1;
    return X(n-1) + Y(n-1);
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int tc;
    int n;
    scanf("%d", &tc);
    for (int i=0; i<tc; i++) {
        scanf("%d", &n);
        printf("%d %d\n", X(n), Y(n));
    }
    return 0;
}
