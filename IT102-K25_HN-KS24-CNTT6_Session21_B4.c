#include <stdio.h>

struct Book {
    char title[100];
    char author[50];
    float price;
};

int main() {
    struct Book books[3];
    for(int i=0;i<3;i++) {
        printf("Nhap ten sach %d: ", i+1);
        fgets(books[i].title, sizeof(books[i].title), stdin);

        printf("Nhap tac gia %d: ", i+1);
        fgets(books[i].author, sizeof(books[i].author), stdin);

        printf("Nhap gia %d: ", i+1);
        scanf("%f", &books[i].price);
        getchar(); // xoá ký tự Enter còn lại
    }
    for(int i=0;i<3;i++) {
        printf("Sach %d:\n", i+1);
        printf("Ten: %s", books[i].title);
        printf("Tac gia: %s", books[i].author);
        printf("Gia: %.2f\n", books[i].price);
    }
    return 0;
}
