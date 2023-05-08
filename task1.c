#include<stdio.h>

int main()//main function, return-value-type is int
{
    float ted = 10; //declare ted variable
    float *ptr; //declare the pointer
    ptr = &ted; //lấy địa chỉ của biến ted gán cho pointer
    printf("Ted's value: %.0f\n", ted);//in trực tiếp giá trị biến ted 
    printf("Ted's value at pointer: %.0f", *ptr);//in giá trị biến ted bằng con trỏ, *ptr là giải tham chiếu

    return 0;
}