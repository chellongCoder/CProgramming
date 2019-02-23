//
//  main.c
//  DIV_ Divisors
//
//  Created by Chel Long on 2/17/19.
//  Copyright © 2019 Chel Long. All rights reserved.
//

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define MAX_VALUE  20
int *dc;
int *primes;
int prime_count;

void count_divisors(int *dc, int max) {
//    Init
    int j;
    
    dc[1] = 1;
    for (int i=0; i<MAX_VALUE; i++) {
        dc[i]=2;
    }
    int lim = (int)sqrt(MAX_VALUE);
    for (int i=0; i<lim++; i++) {
        j = i*i;
        dc[j] += 1;
        while (j+i<MAX_VALUE) {
            j+=i;
            dc[j] += 2;
        }
    }
}

void build_prime_list() {
//    count the number of primes
    primes = (int*)malloc(MAX_VALUE*sizeof(int));
    prime_count=0;
    for (int i=0; i<MAX_VALUE; i++) {
        if(dc[i]==2) {
            primes[prime_count] = i;
            prime_count++;
        }
    }
}

int is_prime(int x) {
    for (int i=0; i<prime_count && primes[i]<=x; i++) {
        if(primes[i]==x) {
            return 1;
        }
    }
    return 0;
}

int check(int x) {
    int lim =(int)sqrt(x);
    int j;
    for (int i=0; primes[i]<lim; i++) {
        if(x%primes[i]==0) {
            j = x/primes[i];
            if(is_prime(j) && j!=primes[i]) {
                return 1;
            }
            return 0;
        }
    }
    return 0;
}
int main(int argc, const char * argv[]) {
    // insert code here...
//    1. Xác định danh sách số nguyên tố của các số nguyên từ 1...MAX_VALUE
    dc = (int*)malloc((MAX_VALUE+1)*sizeof(int));
    count_divisors(dc, MAX_VALUE);
    for (int i=0; i<=MAX_VALUE; i++) {
        printf("%d : %d", i, dc[i]);
    }
//    2. Xây dựg danh sách số nguyên tố
    for (int i=0; i<prime_count; i++) {
        printf("%d", primes[i]);
    }
//    3. TÌm cách phân tích thành nhan tử
    int count = 0;
    for (int i=2; i<MAX_VALUE; i++) {
        if(check(dc[i])) {
            count ++;
            if(count==9) {
                printf("%d\n", i);
            }
        }
    }
    return 0;
}
