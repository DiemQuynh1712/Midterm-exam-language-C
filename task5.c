#include <stdio.h>
int main()//main function
{
    int n;//declare n variable, n là số hàng và cột của hình
    printf("Enter number of rows and columns: ");//yêu cầu người dùng nhập số hàng và cột của hình vẽ
    scanf("%d", &n);//nhập n
    for (int i = 1; i <= n; i++)//vòng lặp for, tạo biến đếm i = 1, i chạy từ 1 đến n. i tăng dần 1 đơn vị
                                //i chính là số hàng
                                //với mỗi hàng, tạo thêm vòng for nhỏ hơn để in ra các kí tự bên trong hàng
    {
        for (int j = 1; j <= n - i; j++)//vòng for in ra các dấu # của mỗi hàng, nhận thấy số lượng dấu # bằng n - i
            printf("#");
        for (int j = 1; j <= i; j++)//chương trình chạy vòng for con tiếp theo, in ra dấu * của mỗi hàng
                                    //nhận thấy số lượng dấu * đúng bằng i
            printf("*");
        printf("\n");//sau khi in các dấu # và * theo yêu cầu, chương trình ngắt dòng và chuyển sang hàng thứ 2, i = 2
                    //tiếp tục thực hiện các bước lặp đến khi không còn thỏa mãn điều kiện, ta được hình vẽ yêu cầu
    }
    return 0;
}