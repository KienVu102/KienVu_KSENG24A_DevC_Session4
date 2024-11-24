#include <stdio.h>

int main(){
	float sodiencu, sodienmoi, sodien, tiendien;
	printf("Moi ban nhap so dien cu: ");
	scanf("%f", &sodiencu);
	printf("Moi ban nhap so dien moi: ");
	scanf("%f", &sodienmoi);
	sodien = sodienmoi - sodiencu;
	printf("So dien thang nay la: %.3f \n", sodien);
	
	if(0<=sodien && sodien<50){
		tiendien = sodien * 10.000;
		printf("Tien dien thang nay la: %.3f", tiendien);
	}
	else if(50<=sodien && sodien<100){
		tiendien = sodien * 15.000;
		printf("Tien dien thang nay la: %.3f", tiendien);
	}
	else if (100<=sodien && sodien<150){
		tiendien = sodien * 20.000;
		printf("Tien dien thang nay la: %.3f", tiendien);
	}
	else if (150<=sodien && sodien<200){
		tiendien = sodien * 25.000;
		printf("Tien dien thang nay la: %.3f", tiendien);
	}
	else{
		tiendien = sodien *30.000;
		printf("Tien dien thang nay la: %.3f", tiendien);
	}
	
	return 0;
} 
