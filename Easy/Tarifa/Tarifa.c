#include <stdio.h>
int main() {
	int x, n, i, total, temp;

	scanf("%d", &x);
	scanf("%d", &n);

	total = x * (n + 1);

	for (i = 0; i < n; i++) {
		scanf("%d", &temp);
		total = total - temp;
	}

	printf("%d\n", total);

	return 0;
}
