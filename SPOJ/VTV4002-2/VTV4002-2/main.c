//
//  main.c
//  VTV4002-2
//
//  Created by Chel Long on 3/2/19.
//  Copyright © 2019 Chel Long. All rights reserved.
//

#include <stdio.h>
void output (int a[], int n) {
    for (int i=0; i<n; i++) {
        printf("%d ", a[i]);
    }
}

void insertionSort(int s1[], int s2[], int n) {
    int key1, key2, j1, j2;
    for (int i=1; i<n; i++) {
        key1 = s1[i];
        key2 = s2[i];
        j1 = i -1;
        j2 = i -1;
        while (j1>=0 && s1[j1] > key1) {
            s1[j1+1] = s1[j1];
            j1--;
        }
        while (j2>=0 && s2[j2] < key2) {
            s2[j2+1] = s2[j2];
            j2--;
        }
        s1[j1+1] = key1;
        s2[j2+1] = key2;
    }
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
    insertionSort(s1, s2, n);
    output(s1, n);
    printf("\n");
    output(s2, n);
    printf("\n");

    return 0;
}
