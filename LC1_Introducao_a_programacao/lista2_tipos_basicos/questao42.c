#include <stdio.h>
#define P_GRAT 0.05
#define P_IMP 0.07

int main (){
	float sal_base, grat, imp;
	printf("Salário Base: ");
	scanf("%f", &sal_base);
	grat = sal_base*P_GRAT;
	imp = sal_base*P_IMP;
	printf("A receber: R$ %.2f", (sal_base + grat - imp));
    return 0;
}
