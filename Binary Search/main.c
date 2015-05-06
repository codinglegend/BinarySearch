//
//  main.c
//  Binary Search
//
//  Created by Alain  on 2015-05-05.
//  Copyright (c) 2015 Alain . All rights reserved.
//

#include <stdio.h>

//part 2 is not fully completed

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

    typedef struct{int firstIndexPosition; int numberOfOccurences;
    }MultipleIndices;

int main()
{
    int an_array[] = {2, 4, 6, 8, 10};
    
    int arraySize = sizeof(an_array)/sizeof(int);
    
    int result = binarySearch(6, an_array, 0, arraySize);
    
    for (int i=0; i < arraySize +1; i++)
        if (an_array[result+1] == an_array[result]){
            i+=1;
        }else{
            printf("%d\n",i);
//            i = numberOfOccurences;
            break;
        }
    

    return 0;
}

//     binarySearch returns the index of the target value
