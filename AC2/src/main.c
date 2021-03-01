#include <math.h>
#include <stdio.h>
int convert(long long);
void main() {
	long long n;
	printf("Introdueix un nombre en format binari : ");
	scanf("%lld", &n);
	printf("El nombre %lld en decimal és igual a %d ", n, convert(n));
}
int convert(long long n) {
	int dec = 0, i = 0, rem;
	while (n != 0) {
		rem = n % 10;
		n /= 10;
		dec += rem * (pow(2, i));
		++i;
	}
	return dec;
}

