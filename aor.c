#include <stdio.h>

struct data {
	char rotulo;
	int prioridade;
};

void saida(struct data array[]);

int main(void) {

	while (1) {

		int n;
		scanf("%d", &n);
		// conditinal
		if (n < 1 || n > 50000) {
			return 0;
		}else if (n == 0) {
			break;
		}

		int i = 0;
		struct data array[n];

		for (i = 0; i < n; i++) {
			scanf("%c/%d", &array[i].rotulo, &array[i]. prioridade);
			// conditional
			if (array[i].rotulo >= 'A' && array[i].rotulo <= 'Z') {
				return 0;
			}else if (array[i].prioridade < 1) {
				return 0;
			}
		}

	}
	return 0;
}


void saida(struct data array[]) {

	int size = sizeof(array);
	int i;

	for (i = 0; i < size; i++) {
		printf("(");
		for (j = 0; j < count; j++) {
			if (array[j].prioridade == i) {
				printf("%c/%d)", array[j].rotulo, array[j].prioridade);
			}else {
				continue;
			}
		}
	}

}
