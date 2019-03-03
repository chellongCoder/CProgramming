//
//  main.c
//  VTV4003-3
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
        printf("%d ", a[i]);
    }
}

void insertionSort(int s1[],int s2[], int n) {
    int min_index, max_index;
    int j;
    for (int i=0; i<n-1; i++) {
        min_index = i;
        max_index = i;
        j = i+1;
        while (j<n) {
            if(s1[j] < s1[min_index]) {
                min_index = j;
            }
            if(s2[j] > s2[max_index]) {
                max_index = j;
            }
            j++;
        }
        if(min_index!=i) {
            swap(&s1[min_index], &s1[i]);
            
        }
        if(max_index!=i) {
            swap(&s2[max_index], &s2[i]);
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
    int s1[n], s2[n];
    for (int i=0; i<n; i++) {
        scanf("%d", &s1[i]);
    }
    for (int i=0; i<n; i++) {
        scanf("%d", &s2[i]);
    }
    insertionSort(s1, s2, n);
    return 0;
}
