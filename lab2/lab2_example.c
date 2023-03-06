#include<stdio.h>
unsigned int EuclidGCD(unsigned int m , unsigned int n ){
	unsigned int r;
	int opcount =0;
	while (n!=0){
	opcount++;
	r=m%n;
	m=n;
	n=r;
	}
	printf("operation count %d\n",opcount);
	return m;
}
int main(){
	unsigned int m ,n;
	printf("Enter two numbers whose gcd has to be calculated ");
	scanf("%d",&m);
	scanf("%d",&n);
	printf("gcd of two numbers using euclids method is  %d  ",EuclidGCD(m,n));
	return 0;
}