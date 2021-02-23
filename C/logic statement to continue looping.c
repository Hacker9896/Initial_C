#include <stdio.h>
int main(){
	int signatureneed = 1000;
	int day =0;
	int newsignature = 3;
	int totalsignature = 3;
	while (totalsignature<1000){
		day++;
		newsignature = 2*newsignature;
		printf(" At day %d the new signatures are %d : ",day,newsignature);
		totalsignature =  totalsignature + newsignature;
		printf("Total is %d\n", totalsignature);
	
	}
}
