// Calculate the length of an array using the sizeof()
#include <stdio.h>

int main(){
    int arr[]= {1, 2, 3, 4, 5};

    int sizeOfArr = sizeof(arr) / sizeof(arr[0]);

    printf("The length of int arrays is: %d\n", sizeOfArr);
}
