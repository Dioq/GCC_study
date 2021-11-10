extern int shared;

void main() {
	int a = 100;
	swap(&a, &shared);
}
