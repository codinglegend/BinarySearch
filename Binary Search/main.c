//
//  main.c
//  Binary Search
//
//  Created by Alain  on 2015-05-05.
//  Copyright (c) 2015 Alain . All rights reserved.
//

#include <stdio.h>


int binarySearch(int value, int numbers[], int minIndex, int maxIndex) {
    if (minIndex > maxIndex) {
        return -1;
    } else {
        int midpointIndex = ((maxIndex + minIndex)/2);
        
        if (numbers[midpointIndex] < value) {
            return binarySearch(value, numbers, midpointIndex + 1, maxIndex);
        } else if (numbers[midpointIndex] > value) {
            return binarySearch(value, numbers, minIndex, midpointIndex - 1);
        }else{
            return midpointIndex;
        }
    }
}

int main()
{
    int an_array[] = {2, 4, 6, 8, 10};
    
    int arraySize = sizeof(an_array)/sizeof(int);
    
    int result = binarySearch(6, an_array, 0, arraySize);
    printf("%d\n", result);
    // binarySearch returns the index of the target value
    return 0;
}


