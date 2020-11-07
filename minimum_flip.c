#include <stdio.h>
int count_bits (int a);
int main() {
	int a,b,c;
	int d=0;
	int xor;
	printf("\nEnter the number");
	scanf("%d%d%d",&a,&b,&c);
	d = a | b;
	xor = c^d;
	printf("The difference in bits %d ",count_bits(xor));
	return 0;
}

int count_bits (int a) {
	int count = 0;
	while(a!=0) {
		a = a & (a-1);
		count++;
	}
	return count;
}
