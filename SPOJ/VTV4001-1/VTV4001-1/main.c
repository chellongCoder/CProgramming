//
//  main.c
//  VTV4001-1
//
//  Created by Chel Long on 3/2/19.
//  Copyright © 2019 Chel Long. All rights reserved.
//

#include <stdio.h>
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void output (int a[], int n) {
    for (int i=0; i<n; i++) {
        printf("%d ", a[i]);
    }
}
void bubbleSort (int s1[], int s2[], int n) {
    for (int i=0; i<n-1; i++) {
        for (int j=n-1; j>i; j--) {
            if(s1[j] < s1[j-1]) {
                swap(&s1[j], &s1[j-1]);
            }
            if(s2[j] > s2[j-1]) {
                swap(&s2[j], &s2[j-1]);
            }
        }
    }
    output(s1, n);
    printf("\n");
    output(s2, n);
    printf("\n");
    
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int n;
    scanf("%d", &n);
    int s1[n];
    int s2[n];
    for (int i=0; i<n; i++) {
        scanf("%d", &s1[i]);
    }
    for (int i=0; i<n; i++) {
        scanf("%d", &s2[i]);
    }
    bubbleSort(s1, s2, n);
    return 0;
}
