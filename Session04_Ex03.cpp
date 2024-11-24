#include <stdio.h>

int main(){
	int number;
	printf("Hay nhap so nguyen ban muon: ");
	scanf("%d", &number);
	
	if(number%3==00 && number%5==0){
		printf("So nguyen nay chia het cho ca 3 va 5");
	}else if(number%5==0){
		printf("So nguyen chia het cho 5 nhung ko chia het cho 3");
	}else if(number%3==00){
		printf("So nguyen chia het cho 3 nhung ko chia het cho 5");
	}
	else{
		printf("So nguyen ko chia het cho ca 3 va 5");
	}
	
	return 0;
}
