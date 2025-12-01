#include <stdio.h>

int main() {
    int n;
    printf("Nhap so chu so muon in: ");
    scanf("%d", &n);

    int len = n * 10 / 3 + 2;   // độ dài mảng làm việc
    int a[len];

    // khởi tạo mảng
    for (int i = 0; i < len; i++)
        a[i] = 2;

    int carry, q, x;

    printf("3.");   // phần nguyên của PI

    for (int digit = 0; digit < n; digit++) {
        carry = 0;
        for (int i = len - 1; i > 0; i--) {
            x = a[i] * 10 + carry;
            q = x / (2 * i + 1);
            a[i] = x % (2 * i + 1);
            carry = q * i;
        }

        x = a[0] * 10 + carry;
        q = x / 10;
        a[0] = x % 10;

        if(digit>0){
            printf("%d",q);
        if ((digit ) % 50 == 0)   // mỗi 50 số xuống dòng cho dễ nhìn
            printf("\n");
    }
}

    printf("\n");
    return 0;
}
