#include<stdio.h>

int main()//main function, return-value-type is int
{
    float ted = 10; //declare ted variable
    float *ptr; //declare the pointer
    ptr = &ted; //get the memory address of the variable ted assigned to the pointer
    printf("Ted's value: %.0f\n", ted);//directly print the variable value ted
    printf("Ted's value at pointer: %.0f", *ptr);//print ted variable value by pointer, *ptr is dereference

    return 0;
}