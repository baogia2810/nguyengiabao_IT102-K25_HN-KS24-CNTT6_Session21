#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int age;
    float grade;
};

void search(struct Student students[], int n, char key[]) {
    for(int i=0;i<n;i++) {
        if(strcmp(students[i].name, key)==0) {
            printf("Ten: %s\n", students[i].name);
            printf("Tuoi: %d\n", students[i].age);
            printf("Diem trung binh: %.2f\n", students[i].grade);
            return;
        }
    }
    printf("Khong tim thay hoc sinh\n");
}

int main() {
    struct Student students[5];
    for(int i=0;i<5;i++) {
        printf("Nhap ten hoc sinh %d: ", i+1);
        scanf(" %[^\n]", students[i].name);
        printf("Nhap tuoi hoc sinh %d: ", i+1);
        scanf("%d", &students[i].age);
        printf("Nhap diem trung binh hoc sinh %d: ", i+1);
        scanf("%f", &students[i].grade);
    }
    char key[50];
    printf("Nhap ten hoc sinh can tim: ");
    scanf(" %[^\n]", key);
    search(students, 5, key);
    return 0;
}

