#include <stdio.h>

int main(){
    int year;
    printf("Moi ban nhap so nam: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
        printf("Day la nam nhuan", year);
    } else{
        printf("Day khong phai la nam nhuan", year);
    }

    return 0;
}

