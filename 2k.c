#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    switch (n) {
        case 1:
            printf("E linh ngu");
            break;
        case 2:
            printf("Doc den day roi thi chac han m ngu that linh a:))");
            break;
        case 3:
            printf("Doc den day nua thi m cang ngu them=)) 😏");
            break;
        case 4:
            printf("Cuoi vl linh a=))");
            break;
        case 5:
            printf("Ngu ngu qua ngu luon hahaahah");
            break;
        case 6:
            printf("Anh yeu em nhieu lam");
            break;
        case 7:
            printf("Xem xong roi thi hoc di:>");
            break;
        default:
            printf("Invalid input! Please enter week number between 1-7");
    }
    return 0;

    
}