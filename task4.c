#include <stdio.h>
int main ()//main function
{
    int n, m;//declare n, m variable
    printf("n: ");//yêu cầu người dùng nhập n là số đầu tiên
    scanf("%d", &n);//nhập n
    printf("m: ");//yêu cầu người dùng nhập m là số cuối cùng
    scanf("%d", &m);//nhập m
    int sum = 0;//declare sum variable (tính tổng)
    for (int i = n; i <= m; i++) {//vòng lặp for, tạo biến đếm i, cho i chạy từ n đến m, i tăng dần 1 đơn vị
        sum += i;//với mỗi i, tổng sum sẽ bằng sum cộng giá trị của i
        //ví dụ: n = 2, m = 9, sum = 0, i = n = 2 ta được sum = 0 + 2 = 2
        //tiếp tục: i = 3 -> sum = 2 + 3 = 5
        //cứ thế cho đến khi biến i vượt quá 9, kết thúc vòng lặp, ta được tổng sum = 44
    }
    printf ("The sum of all the integers from %d through %d is %d\n", n, m, sum);//in ra câu kết luận
    return 0;
}