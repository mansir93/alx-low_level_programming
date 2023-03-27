#include<stdio.h>
void swapIntegers(int arr[], int index1, int index2) {
    int temp = arr[index1];
    arr[index1] = arr[index2];
    arr[index2] = temp;
}

int myArray[] = {10, 20, 30, 40};
printf("Values before swap: %d, %d\n", myArray[1], myArray[2]);
swapIntegers(myArray, 1, 2);
printf("Values after swap: %d, %d\n", myArray[1], myArray[2]);



