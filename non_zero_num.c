#include <stdio.h>
#include <stdbool.h> 
int is_a_non_zero(int n);
void main() {
	int n;
	printf("Enter the number \n");
	scanf("%d",&n);
	for(int i=0;i<n;++i) {
		if(is_a_non_zero(i) && is_a_non_zero(n-i)) {
			printf("\nThe numbers are %d\t %d",i,(n-i));
			break;
		}
	}
}

int is_a_non_zero (int n1) {
	int n=n1;
	while(n1>0) {
		if(n1%10 == 0) return 0;
		n1/=10;
	}
	return n;
}
