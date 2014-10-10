//
//  main.c
//  TEST_IOS
//
//  Created by Andrew Cavanagh on 10/10/14.
//  Copyright (c) 2014 WeddingWire. All rights reserved.
//

#include <stdio.h>

int fizzBuzzIterations = 100;
int numbers[10] = {1, 5, 6, 10, 3, 2, 4, 8, 9, 7};

void intSort() {
    int tempInt;
    int count = sizeof(numbers)/sizeof(numbers[0]);
    
    for (int i = 0; i < count; i++) {
        for (int j = i + 1; j < count; j++) {
            if (numbers[i] > numbers[j]) {
                tempInt = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = tempInt;
            }
        }
    }
    
    for (int i = 0; i < count; i++) {
        printf("%i", numbers[i]);
    }
}

void fizzBuzz() {
    for (int i = 1; i <= fizzBuzzIterations; i++) {
        if (!(i % 15)) {
            printf ("FizzBuzz");
        } else if (!(i % 3)) {
            printf ("Fizz");
        } else if (!(i % 5)) {
            printf ("Buzz");
        } else {
            printf ("%d", i);
        }
        
        printf("\n");
    }
}

int main(int argc, const char * argv[]) {
    intSort();
    fizzBuzz();
    return 0;
}
