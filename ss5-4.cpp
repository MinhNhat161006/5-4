#include <stdio.h>

int main() {
    int n;

    do {
        printf("Nhập một số nguyên dương từ 1 đến 10: ");
        scanf("%d", &n);

        if (n < 1 || n > 10) {
            printf("Số không hợp lệ. Vui lòng nhập lại.\n");
        }
    } while (n < 1 || n > 10);

    printf("Bảng cửu chương của %d:\n", n);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}
