#include <stdio.h>


struct distance{
	int distkm;
	int distm;
};
int main() {
	distance d1,d2,sum;
	printf("Enter the distance in km-m:");
	printf("Distance for d1 in km is ");
	scanf("%d", &d1.distkm);
	printf("distance for d1 in m is ");
	scanf("%d", &d1.distm);
	printf("Distance for d2 in km is ");
	scanf("%d", &d2.distkm);
	printf("distance for d2 in m is ");
	scanf("%d", &d2.distm);
	sum.distm = d1.distm + d2.distm;
	if(sum.distm > 1000) {
		sum.distkm++;
		sum.distm-=1000;
	}
	sum.distkm = d1.distkm + d2.distkm;
	printf("the total distance is %dkm %dm",sum.distkm,sum.distm);
	return 0;
}