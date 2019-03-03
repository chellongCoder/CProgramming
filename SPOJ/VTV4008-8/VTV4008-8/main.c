//
//  main.c
//  VTV4007-7
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
        printf("%4d", a[i]);
    }
}

void bubbleSort (int a[], int n) {
//    int swapped;
    int count = 0;
    for (int i=0; i<n-1; i++) {
//        swapped = 0;
        for (int j=n-1; j>i; j--) {
            if(a[j] < a[j-1]) {
                printf("%4d: ", count);
                output(a, n);
                swap(&a[j], &a[j-1]);
//                swapped = 1;
                count ++;
                printf("\n");
            }
        }
//        if(!swapped){
//            break;
//        }
    }
    printf("%4d: ", count);
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
    bubbleSort(a, n);
    return 0;
}
