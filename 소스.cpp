#include <stdio.h>

int main() {
	int a, b;

	scanf("%d%d", &a, &b); //& : ∆˜¿Œ≈Õ

	int hap = a + b;
	int cha = a - b;
	int gop = a * b;
	int mok = a / b;

	printf("%d + %d = %d\n", a, b, hap);
	printf("%d - %d = %d\n", a, b, cha);
	printf("%d * %d = %d\n", a, b, gop);
	printf("%d / %d = %d\n", a, b, mok);

}