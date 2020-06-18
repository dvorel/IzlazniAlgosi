#include <stdio.h>

void zvjezdice2(int n) {
	if (n >= 0) {
		for (int i = 0; i <= n; i++) {
			printf("*");
		}
		printf("\n");
		zvjezdice2(n - 1);
		for (int i = 0; i <= n; i++) {
			printf("*");
		}
		printf("\n");
	}
	else {
		return;
	}
}

void zvjezdice(int n) {
	if (n >= 0) {
		for (int i = 0; i < n; i++) {
			printf("*");
		}
		printf("\n");
		return zvjezdice(n-1);
	}
	else {
		return;
	}
}

int main() {
	zvjezdice2(5);
	printf("\n\n\n");
	zvjezdice(5);

}
