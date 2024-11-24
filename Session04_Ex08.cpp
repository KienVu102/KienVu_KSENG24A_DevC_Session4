#include <stdio.h>

int main(){
	int a, b, c;
	printf("Moi ban nhap lan luot canh cua a, b, c: ");
	scanf("%d %d %d", &a, &b, &c);

	if(a+b>c && a+c>b && c+b>a){
		printf("3 canh %d %d %d lap duoc thanh 1 tam giac", a, b, c);
	}
	else{
		printf("3 canh %d %d %d khong lap duoc thanh 1 tam giac ", a, b, c);
	}
	
	return 0;
}
