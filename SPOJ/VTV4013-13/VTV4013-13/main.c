//
//  main.c
//  VTV4011-1
//
//  Created by Chel Long on 3/3/19.
//  Copyright © 2019 Chel Long. All rights reserved.
//

#include <stdio.h>
void swap (int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void output (int a[], int n) {
    for (int i=0; i<n; i++) {
        printf("%4d", a[i]);
    }
}
void insertionSort(int a[], int n) {
    int min_index;
    int j;
    int count = 0;
    for (int i=0; i<n-1; i++) {
        min_index = i;
        j = i+1;
        while (j<n) {
            if(a[j] > a[min_index]) {
                min_index = j;
            }
            j++;
        }
        if(min_index!=i) {
            printf("%4d:", count);
            output(a, n);
            printf("\n");
            count++;
        }
        
        swap(&a[min_index], &a[i]);
    }
    printf("%4d:", count);
    output(a, n);
    printf("\n");
    
}
int main(int argc, const char * argv[]) {
    // insert code here...
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
    insertionSort(a, n);
    return 0;
}
