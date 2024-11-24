#include <stdio.h>

int main(){
	int n1, n2, n3;
	
	printf("Nhap so thu nhat: ");
	scanf("%d", &n1);
	printf("Nhap so thu hai: ");
	scanf("%d", &n2);
	printf("Nhap so thu ba: ");
	scanf("%d", &n3);
	
	if( (n3>n2 && n3<n1) || (n3>n1 && n3<n2) ){
		printf("So %d nam trong khoang giua 2 so %d va %d", n3, n2, n1);
	}else {
		printf("So %d khong nam trong khoang giua 2 so %d va %d", n3, n2, n1);
	}
	
	return 0;
}
