#include<stdio.h>

int main()
{
    float Ted = 3.1415,*ptr;

    ptr = &Ted;   //ptr references var

    printf("Value stored at ptr = %f",*ptr);

    return 0;
}