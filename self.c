#include <stdio.h>

void order_pair(int *a, int *b) {
    int temp;
    if (*a <= *b) {
        return *a, *b;
    } 
    else {
    temp = *a;
    *a = *b;
    *b = temp;
    }
}
int main(void) {
	int x = 5, y = 5;
	int *p = &x;
	order_pair(&x, &y);
	printf("After: %d %d\n", x, y);
	printf("Value through p: %d\n", *p);
	return 0;
}