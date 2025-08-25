#include <stdio.h>

struct Product {
    char name[50];
    float price;
    int quantity;
};

int main() {
    struct Product products[5];
    float total = 0;
    for(int i=0;i<5;i++) {
        printf("Nhap ten san pham %d: ", i+1);
        scanf(" %[^\n]", products[i].name);
        printf("Nhap gia san pham %d: ", i+1);
        scanf("%f", &products[i].price);
        printf("Nhap so luong san pham %d: ", i+1);
        scanf("%d", &products[i].quantity);
        total += products[i].price * products[i].quantity;
    }
    printf("\nDanh sach san pham:\n");
    for(int i=0;i<5;i++) {
        printf("San pham %d: %s\n", i+1, products[i].name);
        printf("Gia: %.2f\n", products[i].price);
        printf("So luong: %d\n", products[i].quantity);
    }
    printf("\nTong gia tri tat ca san pham: %.2f\n", total);
    return 0;
}
