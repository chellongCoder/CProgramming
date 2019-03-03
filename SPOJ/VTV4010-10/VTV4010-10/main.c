//
//  main.c
//  VTV4009-9
//
//  Created by Chel Long on 3/3/19.
//  Copyright © 2019 Chel Long. All rights reserved.
//

#include <stdio.h>
void output (unsigned int a[], int n) {
    for (int i=0; i<n; i++) {
        printf("%4d", a[i]);
    }
}
void insertionSort(unsigned int a[],unsigned int n) {
    unsigned int temp;
    int j;
    int count = 0;
    for (int i=n-2; i>=0; i--) {
        temp = a[i];
        j = i + 1;
        while (j<=n-1 && a[j] < temp) {
            printf("%4d:",count);
            output(a, n);
            printf("\n");
            count++;
            a[j-1] = a[j];
            a[j] = temp;
            j++;
        }
        a[j-1] = temp;
    }
    printf("%4d:",count);
    output(a, n);
    printf("\n");
}
int main(int argc, const char * argv[]) {
    // insert code here...
    unsigned int n;
    scanf("%d", &n);
    unsigned int a[n];
    for (int i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
    insertionSort(a, n);
    return 0;
}
