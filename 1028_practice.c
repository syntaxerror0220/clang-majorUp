#include <stdio.h>

int main() {
	int n,v;
	int sum = 0;
	scanf("%d", &n);
	int a[1000];
	

	for (int i = 0; i < n; i++) {
		scanf("%d",&a[i]);
	}
	scanf("%d", &v);

	for (int i = 0; i < n; i++) {
		if (a[i] == v) {
			sum++;
		}
	}
	printf("%d",sum);
	

}