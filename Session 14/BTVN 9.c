#include <stdio.h>

int timUCLN(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1 = 56;
    int num2 = 48;
    
    int ucln = timUCLN(num1, num2);
    printf("Uoc chung lon nhat cua %d va %d la: %d\n", num1, num2, ucln);
    
    return 0;
}
