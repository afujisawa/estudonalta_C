#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL, "Portuguese");
    printf(
        "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n"
        "\\a\t=\tBeep\n"
        "\\n\t=\tNova linha\n"
        "\\\\\t=\tBarra\n"
        "%%%%\t=\tPorcentagem\n"
        "\\\?\t=\tInterrogação\n"
        "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n"
    );
}
