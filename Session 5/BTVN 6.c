#include <stdio.h>

int main() {
    float a, b;
    char op;
    
    printf("Nhap a: ");
    scanf("%f", &a);
    printf("Nhap b: ");
    scanf("%f", &b);
    printf("Nhap toan tu (+, -, *, /): ");
    scanf(" %c", &op);
    
    switch(op) {
        case '+':
            printf("%.2f + %.2f = %.2f\n", a, b, a + b);
            break;
        case '-':
            printf("%.2f - %.2f = %.2f\n", a, b, a - b);
            break;
        case '*':
            printf("%.2f * %.2f = %.2f\n", a, b, a * b);
            break;
        case '/':
            if(b == 0) {
                printf("Loi: Khong the chia cho 0\n");
            } else {
                printf("%.2f / %.2f = %.2f\n", a, b, a / b);
            }
            break;
        default:  	
            printf("Loi: Toan tu khong hop le\n");
            break;
    }
    
    return 0;
}
