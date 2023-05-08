#include <stdio.h>
int main()//main function
{
    float tax;//declare tax variable
    float income;//declare income variable
    float actual_income;//declare actual_income variable
    printf("\nyour income: ");//in câu dẫn để chuẩn bị nhập income từ bàn phím
    scanf("%f", &income);//nhập income từ bàn phím
    while (income >= 0)//vòng lặp while, cho phép người dùng nhập liên tục các income khác nhau với điều kiện income >= 0
                        //income < 0 lập tức kết thúc vòng lặp
    {
        if (income <= 5000) //với mỗi giá trị income sẽ thuộc 1 trong các trường hợp bên dưới, thuộc trường hợp nào sẽ
                            //thực hiện công thức tính tương ứng
        {
            tax = 0;
            printf("tax = %2.2f\n", tax);
            actual_income = income - tax;
            printf("actual income = %.2f", actual_income);
        }
        else if (income <= 15000)
        {
            tax = (income - 5000)*0.1;//gán công thức tính tax
            printf("tax = %2.2f\n", tax);//in ra tax
            actual_income = income - tax;//gán công thức tính actual_income
            printf("actual income = %.2f", actual_income);//in ra actual_income
        }
        else if (income <= 35000)
        {
            tax = 10000 * 0.1 + (income - 15000)*0.15;
            printf("tax = %2.2f\n", tax);
            actual_income = income - tax;
            printf("actual income = %.2f", actual_income);
        }
        else 
        {
            tax = 10000 * 0.1 + 20000 * 0.15 + (income - 35000)*0.2;
            printf("tax = %2.2f\n", tax);
            actual_income = income - tax;
            printf("actual income = %.2f", actual_income);
        }
        //sau khi tính xong sẽ chạy tiếp câu printf và scanf để người dùng nhập tiếp giá trị income tiếp theo
        //nhập xong chương trình sẽ tiếp tục vòng lặp while nếu đạt điều kiện
        printf("\nyour income: ");//in câu dẫn để chuẩn bị nhập income từ bàn phím
        scanf("%f", &income);//nhập income từ bàn phím

    }
    return 0;
}