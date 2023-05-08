#include <stdio.h>
void choices ()//tạo function choices in ra các lựa chọn
{
    printf("Please enter one of the following choices:\n");
    printf("C or c) carnivore\tP or p) pianist\n");
    printf("T or t) tree\t\tG or g) game\n");
    printf("Q or q) quit\n");
}
int main()//main function
{
    char choice;//declare choice variable
    choices();//function call
    printf("Please enter letters c, p, t, or g: ");//in ra câu dẫn chuẩn bị nhâp lựa chọn
    scanf("%c", &choice);//nhập lựa chọn
    while (choice != 'Q' && choice != 'q')//vòng lặp while cho phép người dùng nhập liên tục các lựa chọn
                                        //nếu lựa chọn quit sẽ kết thúc vòng lặp
    {
        switch (choice)//switch case cho các trường hợp khác nhau
        {
        case 'C': case 'c':
            printf("Ok. A simple action is a carnivore\n");//in câu lệnh tương ứng với lựa chọn 
            break;
        case 'P': case 'p':
            printf("Ok. A simple action is a pianist\n");
            break;
        case 'T': case 't':
            printf("Ok. A simple action is a tree\n");
            break;
        case 'G': case 'g':
            printf("Ok. A simple action is a game\n");
            break;
        }
        //sau khi in ra câu trả lời tương ứng với lựa chọn khác quit, chương trình tiếp tục vòng lặp while
        //và hỏi người dùng lựa chọn tiếp theo
        printf("Please enter letters c, p, t, or g: ");//in ra câu dẫn chuẩn bị nhâp lựa chọn
        scanf("%c", &choice);//nhập lựa chọn
    }
    return 0;
}