//
// Created by Abdul-Aleem Mohammed on 9/26/26.
//

#include <stdio.h>
#include <stdlib.h>

int* p1;

void FizzBuzz(int n ) {
    if (n%3 == 0) {
        if (n % 5 == 0) {
            printf("FizzBuzz");
        } else {
            printf("Fizz");
        }
    } else if (n % 5 == 0) {
        printf("Buzz");
    }
}

int comparison_function_for_qsort(const void *a, const void *b) {
    int arg1 = *(const int *)a;
    int arg2 = *(const int *)b;

    if (arg1 > arg2) {
        return -1;
    } else if ( arg1 == arg2) {
        return 0;
    } else {
        return 1;
    }
}

int main () {
    // Exercise 1
    printf("Exercise 1.2");
    printf("HeLlO wOrLd \n");

    // Exercise 2
    printf("Testing Exercise 2.2");
    printf("\n");
    FizzBuzz(15);
    printf("\n");
    FizzBuzz(5);
    printf("\n");
    FizzBuzz(3);
    printf("\n");
    printf("\n");

    p1 = malloc(20*sizeof(int));
    printf("Testing exercise 2.4 and doing 2.5");
    for (int i = 0; i < 20; i++) {
        p1[i] = i+1;
        printf("%d",p1[i]);
        printf("\n");
        FizzBuzz(p1[i]);
        printf("\n");
    }

    printf("\n");
    printf("Exercise 2.6");
    for (int i = 1; i <= 30; i++) {
        FizzBuzz(i);
    }

    printf("\n");

    // Exercise 3
    qsort(p1, 20, sizeof(int), comparison_function_for_qsort);
    for (int i = 0; i < 20; i ++) {
        printf("%d", p1[i]);
    }

    return 0;
}