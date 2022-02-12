#include <stdio.h>

int main() {

char palavrasecreta[20];

palavrasecreta[0] = 'M';
palavrasecreta[1] = 'E';
palavrasecreta[2] = 'L';

printf("%c", palavrasecreta[1]);
printf("\n");

sprintf(palavrasecreta, "PALAVRA");

printf("%s\n", palavrasecreta);

}
