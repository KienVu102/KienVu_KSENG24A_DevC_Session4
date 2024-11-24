#include <stdio.h>

int main(){
	int number;
	printf("Hay nhap so nguyen: ");
	scanf("%d", &number);
	if (number%2==0){
		printf("Day la so chan \n");
	}
	else{
		printf("Day la so le \n");
	}
	
	return 0;
}
