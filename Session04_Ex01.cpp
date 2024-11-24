#include <stdio.h>

int main(){
	int number;
	printf("Ban hay nhap so nguyen mong muon: ");
    scanf("%d", &number);
    
    if(number>0){
    	printf("Day la so nguyen duong\n");
	}
	else{
		printf("Day la so nguyen am\n");
	}
	
	return 0;
} 
