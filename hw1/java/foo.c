#include <stdio.h>
#define read(x) scanf("%d\n", &x)
#define write(x) printf("%d\n", x)

void foo() {
	int a;
	read(a);
	write(a);
}

int main() {
	foo();
} 
