#include <stdio.h>

struct Car {
    char model[50];
    int year;
    float price;
};

int main() {
    struct Car myCar = {"Toyota Camry", 2020, 750000};
    printf("Mau xe: %s\n", myCar.model);
    printf("Nam san xuat: %d\n", myCar.year);
    printf("Gia xe: %.1f\n", myCar.price);
    return 0;
}
