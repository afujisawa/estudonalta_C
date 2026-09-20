#include <stdio.h>
#include <locale.h>
void main() {
    setlocale(LC_ALL, "Portuguese");
    printf(
        "Listagem de Alunos\n"
        "Nome\t\tNota\n"
        "--------------------\n"
        "Ana Beatriz\t8.5\n"
        "Biaca Martins\t9.0\n"
        "Cláudio Sá\t5.5\n"
        "Giovanna Silva\t7.5\n"
    );
}
